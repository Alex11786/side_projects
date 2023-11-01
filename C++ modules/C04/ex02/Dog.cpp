#include "Dog.hpp"

Dog::Dog(void)
{
    this->brain = new Brain;
    this->type = "Dog";
    std::cout << "Dog default constructor called\n";
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called\n";
    *this = other;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assignment operator called\n";
    this->brain = new Brain;
    this->brain = other.brain;
    this->type = other.type;
    return(*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog says woof\n";
}