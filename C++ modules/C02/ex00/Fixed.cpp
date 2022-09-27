#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fix_point_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed & Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
    this->fix_point_value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
	this->fix_point_value = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
	return (this->fix_point_value);
}