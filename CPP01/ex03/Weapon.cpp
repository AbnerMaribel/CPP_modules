#include "Weapon.hpp"

std::string const &Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
    return;
}

Weapon::Weapon(std::string type) : type(type){
    return;
}

Weapon::~Weapon() {
    return;
}

