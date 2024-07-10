#include "whatever.hpp"


int main(int argc, char **argv) {
	int a = 1;
	int b = 2;

	swap(a, b);
	std::cout << "a is now " << a << " and b is now " << b << std::endl;
	return 0;
}
