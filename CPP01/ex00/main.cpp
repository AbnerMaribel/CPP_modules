#include "Zombie.hpp"

int main(void) {
    Zombie* z = newZombie("Zombie1");
    z->announce();
    delete z;
    randomChump("Zombie2");
    return 0;
}

