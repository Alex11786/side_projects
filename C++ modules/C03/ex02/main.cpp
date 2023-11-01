#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	alex("Alex");
	FragTrap	eugene("Eugene");

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
	eugene.highFivesGuys();
	std::cout << "---" << std::endl;
}