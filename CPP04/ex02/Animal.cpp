#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal: Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
    std::cout << "Animal: Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &assign)
{
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    if(this != &assign)
        this->type = assign.type;
    return *this;
}

const std::string &Animal::getType() const {
    return type;
}

