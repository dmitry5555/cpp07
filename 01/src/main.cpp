#include "iter.hpp"

template <typename T, typename F>
void iter(T* array, size_t length, F func) {
	for (int i = 0; i < length; i++) {
		func(array[i]);
	}
}

template <typename T>
void print(T value) {
	std::cout << value << std::endl;
}

int main () {
	// int
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
    iter(intArray, intLength, print<int>);
	
    // char
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t charLength = sizeof(charArray) / sizeof(charArray[0]);
    iter(charArray, charLength, print<char>);
}
