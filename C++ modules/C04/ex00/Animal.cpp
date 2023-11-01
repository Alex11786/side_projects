#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
    std::cout << "Animal constructor called\n";
    this->type = "Some animal";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called\n";
    *this = other;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal copy assignment operator called\n";
    this->type = other.type;
    return(*this);
}

std::string  Animal::getType(void) const
{
    return(this->type);
}

void  Animal::makeSound(void) const
{
    std::cout << "*Sound of an animal*\n";
}