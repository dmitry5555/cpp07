#include "whatever.hpp"

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T& a, const T& b) {
	return (a < b) ? a : b;
}

template <typename T>
T max(const T& a, const T& b) {
	return (a > b) ? a : b;
}

int main(int argc, char **argv) {
	char a = 1;
	char b = 1;
	// char b = 'a';

	::swap(a, b); 
	std::cout << "a is now " << a << " and b is now " << b << std::endl;
	return 0;
}
