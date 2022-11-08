#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    std::cout << "Cat: Default Constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(), brain(new Brain(*copy.brain))
{
    std::cout << "Cat: Copy Constructor called" << std::endl;
    this->type = copy.type;
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
    delete brain;
}

Cat & Cat::operator=(const Cat &assign)
{
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    if(this != &assign) {
        this->type = assign.type;
        *(this->brain) = *(assign.brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}
