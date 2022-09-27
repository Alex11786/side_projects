#include "phonebook.hpp"

std::string	Contact::getIndex() const
{
	return _index;
}

std::string Contact::getName() const
{
	return _firstName;
}

std::string Contact::getLast() const
{
	return _lastName;
}

std::string Contact::getNick() const
{
	return _nickName;
}

std::string Contact::getPhone() const
{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return _darkestSecret;
}

void Contact::truncateFunction(std::string Parameter)
{
	if(Parameter.length() > 10)
	{
		Parameter = Parameter.substr(0, 9);
		std::cout << Parameter << "." << "|";
	}
	else
		std::cout << std::right << std::setfill(' ') << std::setw(10) << Parameter << "|";
}

std::string Contact::FunctionTemplate(std::string string, std::string text)
{
	int i;
	i = 0;
	while (i == 0)
	{
		std::cout << text << std::endl;
		i++;
		getline(std::cin, string);
			if(string.empty())
			{
			i = 0;
			text = "Please try again, cant have an empty parameter";
			}
	}
	return string;
}

void Contact::addFunction()
{
	new Contact;
	int i;
	i = 0;
	std::string textArray[6] = {"Please add his/her first name: ", "Please add his/her last name:", "Please add his/her nickname:", "Please add his/her phone number:", "Please add his/her darkest secret:"};
	std::string argsArray[6] = {Contact::getName(), Contact::getLast(), Contact::getNick(), Contact::getPhone(), Contact::getDarkestSecret()};
	while(i < 5)
	{
		argsArray[i] = FunctionTemplate(argsArray[i], textArray[i]);
		i++;
	}
	Contact::setFirstName(argsArray[0]);
	Contact::setLastname(argsArray[1]);
	Contact::setNickName(argsArray[2]);
	Contact::setPhoneNumber(argsArray[3]);
	Contact::setSecret(argsArray[4]);
}

void Contact::searchFunction(int j)
{
	std::cout << std::right << std::setfill(' ') << std::setw(10) << (j + 1) << "|";
	truncateFunction(Contact::getName());
	truncateFunction(Contact::getLast());
	truncateFunction(Contact::getNick());
	std::cout << std::endl;
}