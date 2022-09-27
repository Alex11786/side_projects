#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
    this->brain = new Brain;
    this->type = "Cat";
    std::cout << "Cat default constructor called\n";
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called\n";
    delete this->brain;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor called\n";
    *this = other;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat copy assignment operator called'\n";
    this->brain = new Brain;
    this->brain = other.brain;
    this->type = other.type;
    return(*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Cat says meow\n";
}