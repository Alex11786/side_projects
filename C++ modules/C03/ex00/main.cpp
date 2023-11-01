#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	alex("Alex");
	ClapTrap	eugene("Eugene");
	
	std::cout << "---" << std::endl;
	
	eugene.attack("Alex");
	alex.takeDamage(5);
    alex.takeDamage(12);
	std::cout << "---" << std::endl;
	
	alex.attack("Eugene");
	eugene.takeDamage(2);
	std::cout << "---" << std::endl;
	
	alex.beRepaired(5);
}