#include <iostream>
#include "Converter.hpp"
#include <string>
#include <iomanip>

int main (int argc, char **argv)
{
	int i = 0;
	while(argv[1][i] != '\0')
		i++;
	std::string str = argv[1];
	if (argc == 2)
	{
		Converter conv(argv[1]);
		
		if (conv.getNum() != 0 && conv.toInt() == 0)
		{
			std::cout << "char: Impossible" << std::endl;
			std::cout << "int: Impossible" << std::endl;
		}
		else
		{
			std::cout << "char: " << conv.toChar() << std::endl;
			std::cout << "int: " << conv.toInt() << std::endl;
		}
		if((conv.toInt()) != (conv.toFloat()))
		{
			std::cout << "float: " << conv.toFloat() << "f" << std::endl;
			std::cout << "double: " << conv.toDouble() << std::endl;
		}
		else
		{
			std::cout << std::fixed << std::setprecision(1) << "float: " << conv.toFloat() << "f" << std::endl;
			std::cout << std:: fixed << std::setprecision(1) << "double: " << conv.toDouble() << std::endl;
		}
	}
}