#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	alex("Alex");
	ScavTrap	eugene("Eugene");

	std::cout << "---" << std::endl;

	eugene.attack("Alex");
	alex.takeDamage(10);
	std::cout << "---" << std::endl;

	alex.attack("Eugene");
	eugene.takeDamage(5);
	std::cout << "---" << std::endl;
	
	eugene.beRepaired(5);
	eugene.beRepaired(10);
	std::cout << "---" << std::endl;
	eugene.guardGate();
	std::cout << "---" << std::endl;
}