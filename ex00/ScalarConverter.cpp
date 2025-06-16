#include <ScalarConverter.hpp>
#include <HandlerFactory.hpp>
#include <iostream>

void ScalarConverter::convert(const std::string& litteral)
{
    const ALiteralTypeHandler* handler = HandlerFactory::getHandler(litteral);

    if(handler)
        handler->handle(litteral);
    else
        std::cout << "char   : Impossible \nint    : Impossible \nfloat  : Impossible \ndouble : Impossible\n";
    delete handler;
}
