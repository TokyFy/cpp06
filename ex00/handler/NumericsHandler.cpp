#include <NumericsHandler.hpp>
#include "../utils.hpp"
#include <cstdlib>

NumericsHandler::NumericsHandler()
{
    return;
}

NumericsHandler::~NumericsHandler()
{
    return;
}

void NumericsHandler::handle(const std::string& litteral) const
{
    double n = std::strtod(litteral.c_str() , NULL);
    castPrintChar(static_cast<long double>(n));
    castIntPrint(static_cast<long double>(n));
    castFloatPrint(static_cast<long double>(n));
    castDoublePrint(static_cast<long double>(n));
}
