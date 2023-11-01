#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(ScavTrap &other);

        ScavTrap& operator=(const ScavTrap &other);
        void attack(const std::string &target);
        void guardGate();
};

#endif