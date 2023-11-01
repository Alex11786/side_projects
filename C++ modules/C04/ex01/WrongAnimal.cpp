#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "Wrong animal";
    std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    this->type = other.type;
    std::cout << "WrongAnimal copy assignment operator called\n";
    return(*this);
}

std::string WrongAnimal::getType(void) const
{
    return(this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "*Sounds of a wrong animal\n";
}

