#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called\n";
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called\n";
    *this = other;
}

Brain& Brain::operator=(const Brain &other)
{
    std::cout << "Brain copy assignment operator called\n";
    int i = 0;
    while(i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
    return(*this);
}