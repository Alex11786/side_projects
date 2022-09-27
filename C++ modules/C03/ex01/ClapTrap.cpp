#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->_name = "idk i dont have any";
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called " << other._name << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &other)
{
    if(this->_energyPoints > 0)
    {
        std::cout << this->_name << " attacks " << other << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << this->_name << " doesnt have enough energy points for an action" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " took " << amount << " points of damage" << std::endl;
    if((this->_hitPoints - (int)amount) > 0)
        this->_hitPoints -= amount;
    else
        std::cout << this->_name << " died from taking too much damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_hitPoints > 0)
    {
        if(this->_energyPoints > 0)
        {
            std::cout << this->_name << " repaired itself for " << amount << " hit points\n";
            this->_hitPoints += amount;
            this->_energyPoints--;
        }
        else
            std::cout << "Not enough energy\n";
    }
    else
        std::cout << "You can't repair death\n";
}



ClapTrap::~ClapTrap()
{
    std::cout << _name << " died" << std::endl;
}