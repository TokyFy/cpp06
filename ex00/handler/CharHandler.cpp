#include <CharHandler.hpp>
#include "../utils.hpp"

CharHandler::CharHandler()
{
    return;
}

CharHandler::~CharHandler()
{
    return;
}

void CharHandler::handle(const std::string& litteral) const
{
   castPrintChar(static_cast<long double>(litteral[0]));  
   castIntPrint(static_cast<long double>(litteral[0]));
   castFloatPrint(static_cast<long double>(litteral[0]));
   castDoublePrint(static_cast<long double>(litteral[0]));
}
