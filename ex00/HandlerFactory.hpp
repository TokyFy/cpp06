#pragma once

#include <ALiteralTypeHandler.hpp>

class HandlerFactory
{
    private:
        HandlerFactory();
        ~HandlerFactory();
        HandlerFactory(const HandlerFactory&);
        HandlerFactory operator=(const HandlerFactory&);

    public:
        static const ALiteralTypeHandler* getHandler(const std::string&);
};
