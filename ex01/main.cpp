#include <Serializer.hpp>
#include <iostream>

int main()
{
    Data* data = new Data();
    data->_data_ = 42;

    uintptr_t ptr = Serializer::serialize(data);

    std::cout << data << std::endl;
    std::cout << ptr << std::endl;
    

    Data* dptr = Serializer::deserialize(ptr);
    std::cout << "_data_ : " << dptr->_data_ << std::endl;

    delete data;
}
