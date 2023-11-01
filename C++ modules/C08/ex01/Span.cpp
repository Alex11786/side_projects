#include "Span.hpp"
#include <algorithm>

Span::Span(): N(0)
{
	this->count = 0;
}

Span::Span(unsigned int n) : N(n)
{
	this->count = 0;
}

Span::Span(Span const & origin) : N(origin.getN())
{
	this->count = 0;
}

Span::~Span()
{
}

unsigned int Span::getN(void) const
{
	return(this->N);
}

Span& Span::operator=(Span& origin)
{
	(void)origin;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->count < this->getN())
	{
		this->vect.push_back(num);
		this->count++;
	}
	else
		throw std::exception();
}

unsigned int	Span::shortestSpan(void)
{
	sort(this->vect.begin(), this->vect.end());
	
	if (this->vect.size() > 1)
	{
		int	shortSpan = *(this->vect.end() - 1) - *this->vect.begin();
		std::vector<int>::iterator iter = this->vect.begin();
		while (iter < this->vect.end() - 1)
		{
			if (*(iter + 1) - *iter < shortSpan)
				shortSpan = *(iter + 1) - *iter;
			iter++;
		}
		return (shortSpan);
	}
	else
	{
		return (0);
	}
}

void	Span::fillArray(int num)
{
	this->vect.assign(num, 0);
	generate(this->vect.begin(), this->vect.end(), rand);
}

unsigned int	Span::longestSpan(void)
{
	std::vector<int>::iterator minIter = min_element(this->vect.begin(), this->vect.end());
	std::vector<int>::iterator maxIter = max_element(this->vect.begin(), this->vect.end());
	return (*maxIter - *minIter);
}