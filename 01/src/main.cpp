#include "iter.hpp"

int main() {
    // int
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
    iter(intArray, intLength, print_val<int>);
    
    // char
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t charLength = sizeof(charArray) / sizeof(charArray[0]);
    iter(charArray, charLength, print_val<char>);

    return 0;
}