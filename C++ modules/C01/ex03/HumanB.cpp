#include "HumanB.hpp"
#include "Weapon.hpp"
HumanB::HumanB(){}
HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
}

void HumanB::attack()
{
    std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    this->_weapon = &newWeapon;
}

HumanB::~HumanB(){}