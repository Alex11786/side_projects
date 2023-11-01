#include "phonebook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string Command;
	std::string Commands[3] = {"ADD", "SEARCH", "EXIT"};
	int contactInd;
	contactInd = 0;
	int i = 0;
	int j = 0;
	
	while(1)
	{
		if(j == 0)
		{
			std::cout << "Enter your command in this crappy awesome phonebook." << std::endl;
		}
		else
	{
		std::cout << "Try another command, this one is not in the database" << std::endl;
		std::cout << "\"EXIT\" - to exit the program, \"ADD\" - to add the contact, \"SEARCH\" - to search the contact" << std::endl;
	}
	getline(std::cin, Command);
	j = 0;
	while (i < 3)
	{	
		if (Command.compare(Commands[i]) == 0)
			{
				if(i == 2)
				{
					std::cout << "Exiting the program" << std::endl;
					exit (0);
				}
				j = j - 2;
				contactInd = phoneBook.FunctionDistributor(i, phoneBook, contactInd);
			}
		else
			j++;
		i++;
	}
	i = 0;
	}
	return(0);
}