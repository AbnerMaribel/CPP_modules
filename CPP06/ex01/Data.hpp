#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdint>

struct Data {
    int x;
    std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
