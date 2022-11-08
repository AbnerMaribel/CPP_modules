#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);

    ~ClapTrap();

    ClapTrap & operator=(const ClapTrap &assign);

    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;

    void attack(const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void printInfo();

private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
};

#endif