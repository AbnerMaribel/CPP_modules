#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("EmptyName"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap: Default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap: Constructor with name called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(copy.hitPoints),
                        energyPoints(copy.energyPoints), attackDamage(copy.attackDamage) {
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    return;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor for ClapTrap " << name << " called" << std::endl;
    return;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign) {
    std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
    if(this == &assign)
        return *this;
    this->name = assign.name;
    this->hitPoints = assign.hitPoints;
    this->energyPoints = assign.energyPoints;
    this->attackDamage = assign.attackDamage;
    return *this;
}

std::string ClapTrap::getName() const {
    return name;
}

int ClapTrap::getHitPoints() const {
    return hitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return attackDamage;
}

void ClapTrap::attack(const std::string &target) {
    if(energyPoints <= 0) {
        std::cout << "ClapTrap " << name <<" can't attack. No energy points left" << std::endl;
    }
    if(hitPoints <= 0) {
        std::cout << "ClapTrap " << name <<" can't attack. No hit points left" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
                  << attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if(energyPoints <= 0) {
        std::cout << "ClapTrap " << name <<" can't take damage. No energy points left" << std::endl;
    }
    if(hitPoints <= 0) {
        std::cout << "ClapTrap " << name <<" can't take damage. No hit points left" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << name << " damaged for " << amount << " hit points" << std::endl;
        this->hitPoints -= amount;
    }
    return;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(energyPoints <= 0) {
        std::cout << "ClapTrap " << name <<" can't be repaired. No energy points left" << std::endl;
    }
    if(hitPoints <= 0) {
        std::cout << "ClapTrap " << name <<" can't be repaired. No hit points left" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << name << " repaired for " << amount << " hit points" << std::endl;
        this->hitPoints += amount;
        this->energyPoints--;
    }
    return;
}

void ClapTrap::printInfo() {
    std::cout << "ClapTrap name " << this->getName() << ", hit points: " << this->getHitPoints()
                << ", energy points: " << this->getEnergyPoints() << ", attack damage: "
                << this->getAttackDamage() << std::endl;
    return;
}


