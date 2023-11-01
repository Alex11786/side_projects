#include "Zombie.hpp"

int main()
{
    Zombie Alex("Alex");
    Zombie * Ben = newZombie("ben");

    Alex.announce();
    randomChump("Chomp");
    delete Ben;

    return 0;
}