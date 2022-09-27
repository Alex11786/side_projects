#include <iostream>
#include <cctype>

void couting(int argc, char **argv, int j)
{
	std::string str = argv[j];
	int i = 0;
	char character;

	while (str[i])
	{
		character = str[i];
		std::cout << (char)toupper(character);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int i = 1;

	if(argc == 2)
		couting(argc, argv, 1);
	else if (argc > 2)
	{
		while(argv[i] != '\0')
		{
			couting(argc, argv, i);
			i++;
		}	
	}
	return 0;
}