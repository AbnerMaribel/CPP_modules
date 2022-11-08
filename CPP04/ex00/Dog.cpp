#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog: Default Constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog: Copy Constructor called" << std::endl;
    this->type = copy.type;
}

Dog::~Dog()
{
    std::cout << "Dog: Destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &assign)
{
    std::cout << "Dog: Copy assignment operator called" << std::endl;
    if(this != &assign)
        this->type = assign.type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}