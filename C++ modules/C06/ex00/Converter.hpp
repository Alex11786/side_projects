#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>
# include <string>
# include <climits>
# include <cmath>

class Converter
{
    private:
        double _num;
    public:
        Converter();
        Converter(char *Str);
        ~Converter();
        Converter(Converter &other);

        Converter& operator=(Converter &other);

        char toChar();
        int toInt();
        float toFloat();
        double toDouble();

        double& getNum();
};

#endif