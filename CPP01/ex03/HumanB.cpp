#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
    return;
}

HumanB::~HumanB() {
    return;
}

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    return;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

