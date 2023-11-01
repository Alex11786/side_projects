#include <iostream>


#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	public:
		Data();
		~Data();
		Data(Data & origin);

		Data & operator=(Data & origin);

		int			num;
		std::string	str;
		char		c;
	private:
		
};

#endif