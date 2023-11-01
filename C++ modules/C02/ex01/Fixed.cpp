#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fix_point_value = 0;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed::Fixed(const int corr_fix_value)
{
    std::cout << "Int constructor called\n";
    this->fix_point_value = corr_fix_value << this->bits;
}

Fixed::Fixed(const float corr_fix_value)
{
    std::cout << "Float constructor called\n";
    this->fix_point_value = roundf(corr_fix_value * pow(2, this->bits));
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    this->fix_point_value = other.fix_point_value;
    return(*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fix_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->fix_point_value = raw;
}

int		Fixed::toInt(void) const
{
	return (this->fix_point_value >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return (this->fix_point_value / pow(2, this->bits));
}

std::ostream& operator<<(std::ostream &o, const Fixed &other)
{
    o << other.toFloat();
    return(o);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}