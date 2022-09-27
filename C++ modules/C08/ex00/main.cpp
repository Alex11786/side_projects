#include <iostream>
#include "easyfind.hpp"

int main( void ) {
	
	std::vector<int> array1;
	std::vector<int>::iterator found;
	
	std::cout << "Array : ";
	for (int i = 0; i < 10; i++)
	{
		array1.push_back(i);
		std::cout << i << " ";
	}
	std::cout << std::endl;

	try
	{
		found = easyfind(array1, 2);
		std::cout << "Found " << *found << " in array" << std::endl;
		found = easyfind(array1, 5);
		std::cout << "Found " << *found << " in array" << std::endl;
		found = easyfind(array1, 9);
		std::cout << "Found " << *found << " in array" << std::endl;
		found = easyfind(array1, 15);
		std::cout << "Found " << *found << " in array" << std::endl;
	}
	catch (std::exception& err)
	{
		std::cout << err.what() << std::endl;
	}
	
	return 0;
}