#include <iostream>
#include "Iter.hpp"

int main( void ) {
	
	int arrInt[5] = {2, 4, 6, 8, 10};
	iter(arrInt, 5, printElement);
	std::cout << std::endl;

	char arrChar[6] = {'P', 'e', 'p', 'e', 'g', 'a'};
	iter(arrChar, 6, printElement);
	std::cout << std::endl;
	
	float arrFloat[4] = {3.14f, 3.142f, 3.1416f, 3.14159f};
	iter(arrFloat, 4, printElement);
	std::cout << std::endl;

	std::string arrString[4] = {"John", "Paul", "George", "Ringo"};
	iter(arrString, 4, printElement);
	std::cout << std::endl;
	return 0;
}