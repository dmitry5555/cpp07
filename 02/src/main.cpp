#include <iostream>
#include "Array.hpp"

int main() {
    try {
		// test
        // Test default constructor
        Array<int> emptyArray;
        std::cout << "Size of empty array: " << emptyArray.size() << std::endl;

        // Test constructor with size
        Array<int> intArray(5);
        std::cout << "Size of intArray: " << intArray.size() << std::endl;

        // Fill and print elements
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 10;
        }
        std::cout << "Elements of intArray: ";
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // Test copy constructor
        Array<int> copiedArray(intArray);
        std::cout << "Size of copy: " << copiedArray.size() << std::endl;
        std::cout << "Elements of copy: ";
        for (unsigned int i = 0; i < copiedArray.size(); ++i) {
            std::cout << copiedArray[i] << " ";
        }
        std::cout << std::endl;

        // Check independence of copy
        copiedArray[0] = 100;
        std::cout << "After modifying the copy:" << std::endl;
        std::cout << "First element of original: " << intArray[0] << std::endl;
        std::cout << "First element of copy: " << copiedArray[0] << std::endl;

        // Test assignment operator
        Array<int> assignedArray;
        assignedArray = intArray;
        std::cout << "Size of assigned array: " << assignedArray.size() << std::endl;
        std::cout << "Elements of assigned array: ";
        for (unsigned int i = 0; i < assignedArray.size(); ++i) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;

        // Test exception when out of bounds
        try {
            int outOfBounds = intArray[10];
        } catch (const std::exception& e) {
            std::cout << "!!! Caught exception when accessing element out of array bounds" << std::endl;
        }

        // Test with another data type
        Array<std::string> stringArray(3);
        stringArray[0] = "Hello";
        stringArray[1] = "World";
        stringArray[2] = "!";
        std::cout << "Elements of string array: ";
        for (unsigned int i = 0; i < stringArray.size(); ++i) {
            std::cout << stringArray[i] << " ";
        }
        std::cout << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }


	// const test
	
	// Array<int> arr(5);  // Неконстантный объект
	// arr[0] = 10;  // OK, использует неконстантную версию

	// const Array<int> constArr(5);  // Константный объект
	// // constArr[0] = 10;  // Ошибка компиляции, нельзя изменять константный объект
	// int value = constArr[0];  // OK, использует константную версию
    return 0;
}