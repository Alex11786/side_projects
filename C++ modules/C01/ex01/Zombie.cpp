#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Default constructor was called" << std::endl;
}
Zombie::Zombie(std::string name) : _name(name) {
    std::cout << "Constructor was called " << name << std::endl;
}

Zombie::~Zombie( void ) {
    std::cout << this->_name << std::endl;
}

void Zombie::announce( void )
{
    std::cout << "<" << _name << ">: " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
    Zombie *Alex = new Zombie("Alex");
    return(Alex);
}

void Zombie::init(std::string name)
{
    this->_name = name;
}