#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ClapTrap John("John");
    std::cout << "----------------" << std::endl;
    ScavTrap Mark("Mark");
    std::cout << "----------------" << std::endl;
    John.printInfo();
    Mark.printInfo();
    std::cout << "----------------" << std::endl;
    John.attack("Mark");
    Mark.attack("John");
    John.printInfo();
    Mark.printInfo();
    std::cout << "----------------" << std::endl;
    Mark.guardGate();
    std::cout << "----------------" << std::endl;
    Mark.takeDamage(5);
    Mark.printInfo();
    std::cout << "----------------" << std::endl;
    Mark.beRepaired(15);
    Mark.printInfo();
    std::cout << "----------------" << std::endl;

    return 0;
}


