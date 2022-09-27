#include "Converter.hpp"
#include <string>

Converter::Converter()
{
    this->_num = 0;
}

Converter::Converter(char *Str)
{
    std::string str = Str;
    this->_num = atof(Str);
}

Converter::Converter(Converter &other)
{
    *this = other;
}

Converter& Converter::operator=(Converter &other)
{
    return(other);
}


Converter::~Converter()
{

}

char Converter::toChar(void)
{
    int int_num = toInt();
    if(int_num >= 33 && int_num <= 126)
    {
        char c = static_cast<char>(int_num);
        return(c);
    }
    else
    {
        std::cout << "nondisplayable";
        return(0);
    }
}

int		Converter::toInt(void)
{
	if (this->_num <= INT_MAX && this->_num >= INT_MIN)
	{
		int	i = static_cast<int>(this->_num);
		return (i);
	}
	else
		return (0);
}

float	Converter::toFloat(void)
{
	float f = static_cast<float>(this->_num);
	return (f);
}

double	Converter::toDouble(void)
{
	return (this->_num);
}

double&	Converter::getNum(void)
{
	return (this->_num);
}