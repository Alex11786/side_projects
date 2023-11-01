#include "sed.hpp"

std::string	sed(std::string str, char *pattern, char *replace)
{
	std::string	tmp;
	
	while (str.find(pattern) != std::string::npos)
	{
		tmp += str.substr(0, str.find(pattern)) + replace;
		str = str.substr(str.find(pattern) + strlen(pattern));
	}
	tmp += str;
	return (tmp);
}

int	main(int ac, char **av)
{
	std::ifstream	fileName;
	std::string	str;
	std::string	tmp;
	
	if (ac == 4)
	{
		fileName.open(av[1]);
		if (!fileName.is_open())
		{
			std::cerr << "Error: Could not open file" << std::endl;
			return (-1);
		}
		while (getline(fileName, tmp))
			str.append(tmp + "\n");
		fileName.close();
		std::cout << str << std::endl;
		tmp.clear();
		tmp = av[1];
		tmp += ".replace";
		std::ofstream outFile(tmp.c_str());
		tmp = sed(str, av[2], av[3]);
		outFile << tmp;
	}
	else
		std::cout << "Usage: ./sed <file> <to_replace> <to_replace_with>" << std::endl;
    return (0);
}
