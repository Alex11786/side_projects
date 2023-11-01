#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain &other);

        Brain& operator=(const Brain &other);
};

#endif