#pragma once

#include "../ALiteralTypeHandler.hpp"

class CharHandler : public ALiteralTypeHandler
{
    private:
        CharHandler(const CharHandler&);
        CharHandler& operator=(const CharHandler&);
    
    public:
        CharHandler();
        ~CharHandler();
        
        void handle(const std::string&) const;
};
