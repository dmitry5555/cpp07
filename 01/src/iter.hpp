// iter.hpp
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstddef> // для size_t

template <typename T, typename F>
void iter(T* array, size_t length, F func) {
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}

template <typename T>
void print_val(T value) {
    std::cout << value << std::endl;
}

#endif