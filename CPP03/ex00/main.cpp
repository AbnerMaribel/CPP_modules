#include "ClapTrap.hpp"

int main(void) {
    ClapTrap Jack("Jack");
    Jack.printInfo();
    ClapTrap Tom("Tom");
    Tom.printInfo();
    Jack.attack("Tom");
    Tom.takeDamage(2);
    Jack.printInfo();
    Tom.printInfo();
    Tom.beRepaired(10);
    Tom.printInfo();
    Jack.takeDamage(10);
    Jack.printInfo();
    Jack.beRepaired(5);
    Jack.printInfo();
    Jack.attack("Tom");
    Jack.printInfo();

    return 0;
}


