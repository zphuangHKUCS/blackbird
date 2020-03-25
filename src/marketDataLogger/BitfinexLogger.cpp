

#include "BitfinexLogger.h"
#include "exchanges/bitfinex.h"

quote_t BitfinexLogger::getQuote(Parameters& params)
{
    return Bitfinex::getQuote(params);
}

void BitfinexLogger::logQuote()
{
    std::cout << "BitfinexLogger::log()" << std::endl;
}