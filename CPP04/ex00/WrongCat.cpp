#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat: Default Constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat: Copy Constructor called" << std::endl;
    this->type = copy.type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &assign)
{
    std::cout << "WrongCat: Copy assignment operator called" << std::endl;
    if(this != &assign)
        this->type = assign.type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Mmmmmmmm" << std::endl;
}
