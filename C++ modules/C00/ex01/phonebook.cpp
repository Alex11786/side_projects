#include "phonebook.hpp"

void Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

void Contact::setLastname(std::string lastName)
{
	_lastName = lastName;
}

void Contact::setSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

void Contact::setNickName(std::string nickName)
{
	_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

int PhoneBook::FunctionDistributor(int i, PhoneBook &phonebook, int contactInd)
{
	std::string ind;
	int j = 0;
	int x;
	x = 0;
	if (i == 0)
	{
			phonebook.contact[contactInd].addFunction();
			contactInd++;
			if(contactInd > 7)
				contactInd = 0;
	}
	else if (i == 1)
	{
		while(j < 8)
		{
			phonebook.contact[j].searchFunction(j);
			j++;
		}
		if(phonebook.contact[0].getName().empty() == 1)
		{
			std::cout << "There are no contacts in the phonebook yet" << std::endl;
			return 0;
		}
		std::cout << "Please select an index of a contact to display:" << std::endl;
		while (x == 0)
		{
		getline(std::cin, ind);
		if(ind[0] > 48 && ind[0] < 57 && ind.length() == 1)
		{
			j = std::stoi(ind);
			if(phonebook.contact[j - 1].getName().empty() == 0)
			{
				x = 1;
				std::cout << "Contact with index " << j << ":" << std::endl;
				std::cout << "First Name: " << phonebook.contact[j - 1].getName() << std::endl;
				std::cout << "Last name: " << phonebook.contact[j - 1].getLast() << std::endl;
				std::cout << "Nickname: " << phonebook.contact[j - 1].getNick() << std::endl;
				std::cout << "Phone Number: " << phonebook.contact[j - 1].getPhone() << std::endl;
				std::cout << "Darkest Secret: " << phonebook.contact[j - 1].getDarkestSecret() << std::endl;
			}
			else
				std::cout << "Please check that that contact is present" << std::endl;
		}
		else
			std::cout << "Please enter an index from 1 to 8" << std::endl;
		}
	}
	return contactInd;
}
