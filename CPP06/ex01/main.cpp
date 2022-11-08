#include "Data.hpp"

int main() {
    Data* data = new Data();
    data->x = 5;
    data->str = "Hello";

    std::cout << data << std::endl;

    std::cout << data->x<< std::endl;
    std::cout << data->str << std::endl;

    uintptr_t serialized = serialize(data);

    std::cout << serialized << std::endl;

    Data* deserialized = deserialize(serialized);

    std::cout << deserialized << std::endl;

    std::cout << deserialized->x << std::endl;
    std::cout << deserialized->str << std::endl;

    delete data;

    return 0;
}

