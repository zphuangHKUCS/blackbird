#include <iostream>

#include "marketDataLogger/BitfinexLogger.h"

int main(int argc, char** argv) 
{
    std::cout << "Hello World" << std::endl;
    BitfinexLogger bitfinexLogger;
    Parameters params("blackbird.conf");
    std::cout << bitfinexLogger.getQuote(params).bid << '\t' << bitfinexLogger.getQuote(params).ask << std::endl;
    bitfinexLogger.logQuote();
    return 0;
}