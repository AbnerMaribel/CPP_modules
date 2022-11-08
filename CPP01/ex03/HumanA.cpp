#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon) : name(name), weapon(newWeapon) {
    return;
}

HumanA::~HumanA() {
    return;
}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
    return;
}