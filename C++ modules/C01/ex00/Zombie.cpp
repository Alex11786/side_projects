#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
    std::cout << "Constructor was called " << name << std::endl;
}

void Zombie::announce(){
    std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << _name << std::endl;
}