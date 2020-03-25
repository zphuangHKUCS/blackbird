#include <iostream>

#include "marketDataLogger/BitfinexLogger.h"

int main(int argc, char** argv) 
{
    std::cout << "Hello World" << std::endl;
    BitfinexLogger bitfinexLogger;
    std::cout << bitfinexLogger.getQuote().bid << '\t' << bitfinexLogger.getQuote().ask << std::endl;
    bitfinexLogger.logQuote();
    return 0;
}