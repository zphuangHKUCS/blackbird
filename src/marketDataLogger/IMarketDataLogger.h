 #pragma once

 #include "quote_t.h"

struct Parameters;

class IMarketDataLogger
{
public: 
    virtual quote_t getQuote(Parameters& params) = 0;
    virtual void logQuote() = 0;
};