#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>
# include <string>

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
	Fixed& operator=(const Fixed &other);
    ~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& o,const Fixed &other);


#endif