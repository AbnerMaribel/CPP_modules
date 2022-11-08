#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal: Default Constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
    std::cout << "WrongAnimal: Copy Constructor called" << std::endl;

}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
    std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
    if(this != &assign)
        this->type = assign.type;
    return *this;
}


void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}

