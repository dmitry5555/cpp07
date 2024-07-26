#include "Array.hpp"

// конь с пустым массивом
template <typename T>
MyArray<T>::MyArray() : elements(nullptr) {
	elements = nullptr;
};


// конь с массивом размером size
template <typename T>
MyArray<T>::MyArray(int size) {
	elements = new T[size];
};


//  size() - возвращает размер массива
template <typename T>
int MyArray<T>::size() {
	return sizeof(elements);
};

// перегружаем оператори инд-я
template <typename T>
T& MyArray<T>::operator[](int index) {
	// тестим лимиты и даем эксепшен
	if (index >= sizeof(elements)) {
		throw std::out_of_range("Index out of range");
	}
	return elements[index];
}


// деконь
// удаляет массив
// тк у нас динамический массив, то его нужно чистить
template <typename T>
MyArray<T>::~MyArray() {
	delete[] elements;
};


