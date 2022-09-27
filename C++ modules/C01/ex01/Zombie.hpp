#include <string>
#include <iostream>

#include <string>
#include <iostream>

class Zombie {
private:
    std::string _name;
public:
    Zombie();
    Zombie(std::string name);
    void announce(void);
    void init(std::string name);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );