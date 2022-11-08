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

Fixed::Fixed(const int iNum) {
    std::cout << "Int constructor called" << std::endl;
    value = (iNum << fractionalBits);
    return;
}

Fixed::Fixed(const float fNum) {
    std::cout << "Float constructor called" << std::endl;
    value = roundf(fNum * (1 << fractionalBits));
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
    return value;
}

void Fixed::setRawBits(const int raw) {
    value = raw;
    return;
}

float Fixed::toFloat(void) const {
    return ((float)value / (float)(1 << fractionalBits));
}

int Fixed::toInt() const {
    return (value >> fractionalBits);
}

std::ostream  & operator<<(std::ostream &output, const Fixed &n) {
    return output << n.toFloat();
}
