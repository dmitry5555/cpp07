#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
    T* elements;
    unsigned int m_size;

public:
    Array() : elements(0), m_size(0) {}

	// коструктор с параметром
    explicit Array(unsigned int n) : elements(new T[n]), m_size(n) {
        for (unsigned int i = 0; i < n; ++i) {
            elements[i] = T();
        }
    }
	// коструктор коп-я для копирования массива с выделением памяти
    Array(const Array& other) : elements(new T[other.m_size]), m_size(other.m_size) {
        for (unsigned int i = 0; i < m_size; ++i) {
            elements[i] = other.elements[i];
        }
    }
	// деконь
    ~Array() {
        delete[] elements;
    }
	// опер. присв-я
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] elements;
            m_size = other.m_size;
            elements = new T[m_size];
            for (unsigned int i = 0; i < m_size; ++i) {
                elements[i] = other.elements[i];
            }
        }
        return *this;
    }
	// перегрузка оператора [] для доступа к элементам
	// и обработки ошибки при выходе за границы массива
    T& operator[](unsigned int index) {
        if (index >= m_size) {
            throw std::exception();
        }
        return elements[index];
    }

    // const T& operator[](unsigned int index) const {
    //     if (index >= m_size) {
    //         throw std::exception();
    //     }
    //     return elements[index];
    // }

    unsigned int size() const {
        return m_size;
    }
};

#endif