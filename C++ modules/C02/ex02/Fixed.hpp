#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>
# include <iostream>

class Fixed
{
private:
	int	fix_point_value;
    static const int bits = 8;
public:
    Fixed();
	Fixed(const Fixed &other);
    Fixed(const int corr_fix_value);
	Fixed(const float corr_fix_value);
    ~Fixed();

	Fixed& operator=(const Fixed &other);

    bool	operator>(Fixed const & origin);
    bool	operator<(Fixed const & origin);
    bool	operator>=(Fixed const & origin);
    bool	operator<=(Fixed const & origin);
    bool	operator==(Fixed const & origin);
    bool	operator!=(Fixed const & origin);

    Fixed	operator+(Fixed const & that) const;
    Fixed	operator-(Fixed const & origin) const;
    Fixed	operator*(Fixed const & origin) const;
    Fixed	operator/(Fixed const & origin) const;

    Fixed&	operator++(void);
    Fixed&	operator--(void);
    Fixed	operator++(int);
    Fixed	operator--(int);

    static Fixed& min(Fixed& first, Fixed& second);
    static const Fixed& min(const Fixed& first, const Fixed& second);
    static Fixed& max(Fixed& first, Fixed& second);
    static const Fixed& max(const Fixed& first, const Fixed& second);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& o,const Fixed &other);


#endif