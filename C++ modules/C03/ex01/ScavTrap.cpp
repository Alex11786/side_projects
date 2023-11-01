#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " ScavTrap inherited constructor was called\n";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}


void ScavTrap::attack(const std::string &target)
{
    if(this->_energyPoints > 0)
    {
        std::cout << "FragTrap " << this->_name << " attacks really hard, dealing " << this->_attackDamage \
        << " points of damage to " << target << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << this->_name << " doesnt have enough energy points for an action" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->_name << "ScavTrap destructor was called\n";
}

void ScavTrap::guardGate(void)
{
    std::cout << this->_name << " is guarding the gate\n";
}