#include "whatever.hpp"

int main(int argc, char **argv) {

	// my test
    // char a = 1;
    // char b = 2;
    // ::swap(a, b);
    // std::cout << "a now " << static_cast<int>(a) << ", and b now " << static_cast<int>(b) << std::endl;
    // std::cout << "min(a, b) = " << static_cast<int>(::min(a, b)) << std::endl;
    // std::cout << "max(a, b) = " << static_cast<int>(::max(a, b)) << std::endl;

	// 42 test
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}