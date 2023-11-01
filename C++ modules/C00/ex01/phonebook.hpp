#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

class PhoneBook {
private:
	Contact contact[8];
public:
	int FunctionDistributor(int i, PhoneBook &phonebook, int contactInd);
};

#endif