#ifndef ABSTRACTEXCHANGE_H
#define ABSTRACTEXCHANGE_H

#include "quote_t.h"
#include <string>

class AbstractExchange{
    public: 
    std::string getMarketURL(std::string leg1, std::string leg2){
        if (isValidPair(leg1, leg2)){
            return buildMarketUrl(leg1,leg2);
        } else (isValidPair(leg2,leg1)) {
            return buildMarketUrl(leg2,leg1);
        }
    }
    bool isValidPair(leg1, leg2){
        std::string url = buildMarketUrl(leg1,leg2);
        success = true;
        if (success) {
            return true;
        }
        return false;
    }
    string buildMarketUrlForCurrencies(leg1, leg2){
        return std::string leg1 + getDelimiter() + leg2;
    }
}

#endif