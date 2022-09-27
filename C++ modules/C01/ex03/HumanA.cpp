#include "HumanA.hpp"
#include "Weapon.hpp"
HumanA::HumanA(){}
HumanA::HumanA(std::string name, Weapon &newWeapon)
{
    this->_name = name;
    this->_weapon = &newWeapon;
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
}

HumanA::~HumanA(){}