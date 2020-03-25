

#include "BitfinexLogger.h"
#include "exchanges/bitfinex.h"

quote_t BitfinexLogger::getQuote(Parameters& params)
{
    return Bitfinex::getQuote(params);
}

void BitfinexLogger::log()
{
    std::cout << "BitfinexLogger::log()" << std::endl;
}