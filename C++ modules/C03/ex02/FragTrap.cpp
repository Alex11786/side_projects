#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " FragTrap constuctor called\n";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " high fives\n";
}

FragTrap::~FragTrap()
{
    std::cout << this->_name << " FragTrap destructor called\n";
}