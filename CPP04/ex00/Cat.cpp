#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat: Default Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat: Copy Constructor called" << std::endl;
    this->type = copy.type;
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat &assign)
{
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    if(this != &assign)
        this->type = assign.type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}
