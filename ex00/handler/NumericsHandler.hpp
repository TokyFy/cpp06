#pragma once

#include "../ALiteralTypeHandler.hpp"

class NumericsHandler : public ALiteralTypeHandler
{
    private:
        NumericsHandler(const NumericsHandler&);
        NumericsHandler& operator=(const NumericsHandler&);
    
    public:
        NumericsHandler();
        ~NumericsHandler();
        
        void handle(const std::string&) const;
};
