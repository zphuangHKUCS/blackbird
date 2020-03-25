#pragma once

#include "IMarketDataLogger.h"

class BitfinexLogger : public IMarketDataLogger
{
    // from IMarketDataLogger
    virtual quote_t getQuote(Parameters& params) = 0;
    virtual void logQuote() = 0;

    BitfinexLogger() = default;
};

