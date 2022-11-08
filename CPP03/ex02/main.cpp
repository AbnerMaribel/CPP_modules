#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap John("John");
    std::cout << "----------------" << std::endl;
    FragTrap Mike("Mike");
    std::cout << "----------------" << std::endl;
    John.printInfo();
    Mike.printInfo();
    std::cout << "----------------" << std::endl;
    Mike.highFivesGuys();
    std::cout << "----------------" << std::endl;
    Mike.attack("John");
    Mike.printInfo();
    std::cout << "----------------" << std::endl;
    Mike.takeDamage(10);
    Mike.printInfo();
    std::cout << "----------------" << std::endl;
    Mike.beRepaired(30);
    Mike.printInfo();
    std::cout << "----------------" << std::endl;
    FragTrap Ellie(Mike);
    Ellie.printInfo();
    std::cout << "----------------" << std::endl;


    return 0;
}


