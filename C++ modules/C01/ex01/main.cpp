#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(7, "Elden John");

    delete[] zombies;

    return 0;
}