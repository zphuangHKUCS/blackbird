#pragma once

#include "IMarketDataLogger.h"

class BitfinexLogger : public IMarketDataLogger
{
public: // from IMarketDataLogger
    virtual quote_t getQuote(Parameters& params);
    virtual void logQuote();

public:
    BitfinexLogger() = default;
};

