#include "Fixed.hpp"

Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;
    this->fix_point_value = 0;   
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->fix_point_value = other.getRawBits();
}

Fixed::Fixed(int const number)
{
//	std::cout << "Int constructor called" << std::endl;
	this->fix_point_value = number << this->bits;
}

Fixed::Fixed(float const number)
{
//	std::cout << "Float constructor called" << std::endl;
	this->fix_point_value = roundf(number * 256);
}

int		Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return(this->fix_point_value);
}

void	Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->fix_point_value = raw;
}

int		Fixed::toInt(void) const
{
	return (this->fix_point_value >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fix_point_value / 256);
}

Fixed&	Fixed::operator=(Fixed const & other)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	this->fix_point_value = other.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream &o, Fixed const & other)
{
	o << other.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed const & other)
{
	if (this->fix_point_value > other.fix_point_value)
		return(true);
	else
		return(false);
}

bool	Fixed::operator<(Fixed const & other)
{
	if (this->fix_point_value < other.fix_point_value)
		return(true);
	else
		return(false);
}

bool	Fixed::operator>=(Fixed const & other)
{
	if (this->fix_point_value >= other.fix_point_value)
		return(true);
	else
		return(false);
}

bool	Fixed::operator<=(Fixed const & other)
{
	if (this->fix_point_value <= other.fix_point_value)
		return(true);
	else
		return(false);
}
bool	Fixed::operator==(Fixed const & other)
{
	if (this->fix_point_value == other.fix_point_value)
		return(true);
	else
		return(false);
}

bool	Fixed::operator!=(Fixed const & other)
{
	if (this->fix_point_value != other.fix_point_value)
		return(true);
	else
		return(false);
}

Fixed	Fixed::operator+(Fixed const & other) const
{
	Fixed result;
	result.fix_point_value = this->fix_point_value + other.fix_point_value;
	return (result);
}

Fixed	Fixed::operator-(Fixed const & other) const
{
	Fixed result;
	result.fix_point_value = this->fix_point_value - other.fix_point_value;
	return (result);
}

Fixed	Fixed::operator*(Fixed const & other) const
{
	Fixed result;
	result.fix_point_value = (this->fix_point_value * other.fix_point_value) / 256;
	return (result);
}

Fixed	Fixed::operator/(Fixed const & other) const
{
	Fixed result;
	result.fix_point_value = (this->fix_point_value * 256) / other.fix_point_value;
	return (result);
}

Fixed&	Fixed::operator++(void)
{
	this->fix_point_value = this->fix_point_value + 1;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->fix_point_value = this->fix_point_value - 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old_fixed(*this);
	this->fix_point_value = this->fix_point_value + 1;
	return (old_fixed); 
}

Fixed	Fixed::operator--(int)
{
	Fixed	old_fixed(*this);
	this->fix_point_value = this->fix_point_value - 1;
	return (old_fixed); 
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return (first);
	else
		return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	else
		return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if (first > second)
		return (first);
	else
		return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	else
		return (second);
}	