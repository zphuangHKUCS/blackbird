#include "parameters.h"
#include "nulllongexch.h"
#include <iomanip>
#include <vector>
#include <array>
#include <ctime>
#include <cmath>

namespace NullLongExch
{

static long double timeStart = time(0);

quote_t getQuote(Parameters &params){
 
    // steadily increase bid so exits will execute
    const long double sysTime = time(0);
    double timeElapsed = sysTime - timeStart;
    // start at 9000
    double bidValue = 9000;
    // pingpong between 9000 and 11000 with a bit of randomness
    if (timeElapsed <= 30){
        bidValue = bidValue + timeElapsed*35;       
    } 

    else if (timeElapsed > 60){
        bidValue = bidValue - timeElapsed*35;
    }
    else {reset();}
    double askValue = bidValue+100;
    return std::make_pair(bidValue, askValue);
}

double getAvail(Parameters &params, std::string currency) {
    double availBal = 0;
    if (currency.compare("usd")==0){
        availBal = 1000;
        return availBal;
    } else if (currency.compare("btc")==0){
        availBal = 0.0;
    }
    return availBal;
}

double getActivePos(Parameters &params, std::string orderId){
    double activeSize = std::stod(orderId);
    return activeSize;
}

double getLimitPrice(Parameters &params, double volume, bool isBid){
    double atBid = 10000;
    // pingpong
    const long double sysTime = time(0);
    double atAsk = 9000 + (sysTime - timeStart)*35 + ( 10-1*((double)rand()/(double)RAND_MAX)+1);

    
    return atAsk;
}

std::string sendLongOrder(Parameters &params, std::string direction, double quantity, double price){
    double executedAt = price*quantity;
    std::string execute = std::to_string(executedAt);
    return execute;
}

bool isOrderComplete(Parameters &params, std::string orderId){
    return true;
}
void reset(){
    timeStart = time(0);
}
}