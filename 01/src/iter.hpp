#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <exception>
#include <string>

template <typename T, typename F>
void iter(T* array, size_t length, F func);

template <typename T>
void print(T value);

#endif