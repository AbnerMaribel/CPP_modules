#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("EmptyName")
{
    std::cout << "ScavTrap: Default constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap: Constructor with name called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    return;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor for ScavTrap " << name << " called" << std::endl;
    return;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
    std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
    ClapTrap::operator=(assign);
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if(energyPoints <= 0) {
        std::cout << "ScavTrap " << name <<" can't attack. No energy points left" << std::endl;
    }
    if(hitPoints <= 0) {
        std::cout << "ScavTrap " << name <<" can't attack. No hit points left" << std::endl;
    }
    else {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
                  << attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    return;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name <<" is now in Gate keeper mode" << std::endl;
}