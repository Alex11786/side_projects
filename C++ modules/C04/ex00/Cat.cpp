#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Cat default constructor called\n";
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor called\n";
    *this = other;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Copy assignment operator called'\n";
    this->type = other.type;
    return(*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Catsays meow\n";
}