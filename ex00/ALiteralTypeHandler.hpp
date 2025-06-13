#pragma once

#include <string>

class ALiteralTypeHandler
{
    private:
        ALiteralTypeHandler(const ALiteralTypeHandler &);
        ALiteralTypeHandler& operator=(const ALiteralTypeHandler&);
    public:
        ALiteralTypeHandler();
        virtual ~ALiteralTypeHandler();

        virtual void handle(const std::string&) const = 0;
};
