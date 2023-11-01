#include <iostream>
#include "Span.hpp"

int main( void ) {
	
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2(10);
	int i = 0;
	while (i < 10)
	{
		sp2.addNumber(rand());
		i++;
	}
	std::cout << std::endl;
	std::cout << "Shortest span " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span " << sp2.longestSpan() << std::endl;

	Span sp3(10000);
	sp3.fillArray(10000);
	std::cout << std::endl;
	std::cout << "Shortest span " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span " << sp3.longestSpan() << std::endl;

	return 0;
}