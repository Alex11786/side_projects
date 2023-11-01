#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "Wrong Cat";
    std::cout << "WrongCat default constructor called\n";
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat &other)
{
    *this = other;
    std::cout << "WrongCat copy constructor called\n";
}


WrongCat& WrongCat::operator=(const WrongCat &other)
{
    this->type = other.type;
    std::cout << "WrongCat copy asignment operator called\n";
    return(*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong cat says oink\n";
}