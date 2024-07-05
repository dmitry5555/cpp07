#include "Whatever.hpp"

void convert(std::string input) {
	try {
		
	}
	catch (std::exception &e) {
		std::cout << "char: impossible" << std::endl;
	}
}

void swap(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}

int main(int argc, char **argv) {
	int a = 1;
	int b = 2;

	swap(a, b);
	std::cout << "a is now " << a << " and b is now " << b << std::endl;
	return 0;
}
