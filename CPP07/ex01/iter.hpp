#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T* array, int arrayLength, void (*function)(T&)) {
    for(int i = 0; i < arrayLength; ++i) {
        function(array[i]);
    }
}

template<typename T>
void print(T& val) {
    std::cout << val << std::endl;
}


#endif
