#include <ScalarConverter.hpp>
#include <HandlerFactory.hpp>

void ScalarConverter::convert(const std::string& litteral)
{
    const ALiteralTypeHandler* handler = HandlerFactory::getHandler(litteral);

    if(handler)
        handler->handle(litteral);
    delete handler;
}
