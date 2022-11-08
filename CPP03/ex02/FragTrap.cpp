#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("EmptyName") {
    std::cout << "FragTrap: Default constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap: Constructor with name called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    return;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "FragTrap: Copy constructor called" << std::endl;
    return;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor for FragTrap " << name << " called" << std::endl;
    return;
}

FragTrap &FragTrap::operator=(const FragTrap &assign) {
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
    ClapTrap::operator=(assign);
    return *this;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << ": Let's high fives!" << std::endl;
    return;
}