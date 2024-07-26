#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <exception>
#include <string>

template <typename T>

class MyArray {
	public: 
		T* elements;
		int size();

	private:
		// конструктор по умолчанию - создает пустой массив
		
		// передаем список инициализации  ... , ... , ...
		// чтобы иниц. члены классы во вр. созданмя объекта
		// они у нас принадлежат темплейту
		// частные члены, доступны только внутри класса
		MyArray() : elements(nullptr) {};

		// конструктор с интом
		MyArray(int size) {};

		// деструктор - удаляет массив
		// тк у нас динамический массив, то его нужно чистить
		~MyArray() {};
		T& operator[](int index) {};
};


#endif