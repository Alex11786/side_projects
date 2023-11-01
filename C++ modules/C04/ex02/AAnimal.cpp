#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void)
{
    std::cout << "AAnimal constructor called\n";
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called\n";
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "AAnimal copy constructor called\n";
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
    std::cout << "AAnimal copy assignment operator called\n";
    this->type = other.type;
    return(*this);
}

std::string	AAnimal::getType(void) const
{
	return(this->type);
}