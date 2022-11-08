#include "Zombie.hpp"

Zombie::Zombie() {
    return;
}

Zombie::Zombie(std::string name) : name(name) {
    return;
}

Zombie::~Zombie() {
    std::cout << this->name << " destroyed" << std::endl;
    return;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}




