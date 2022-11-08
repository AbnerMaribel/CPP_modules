#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return;
}


Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return;
}


Fixed & Fixed::operator=(const Fixed &assign) {
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &assign)
        value = assign.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
    return;
}



