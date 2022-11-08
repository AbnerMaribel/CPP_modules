#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &copy);

    ~ScavTrap();

    ScavTrap & operator=(const ScavTrap &assign);

    void attack(const std::string & target);
    void guardGate();

private:

};

#endif