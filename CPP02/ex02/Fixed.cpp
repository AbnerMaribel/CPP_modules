#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    return;
}

Fixed::Fixed(const Fixed &copy) {
    *this = copy;
    return;
}

Fixed::Fixed(const int iNum) {
    value = (iNum << fractionalBits);
    return;
}

Fixed::Fixed(const float fNum) {
    value = roundf(fNum * (1 << fractionalBits));
    return;
}

Fixed::~Fixed() {
    return;
}

Fixed & Fixed::operator=(const Fixed &assign) {
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

bool Fixed::operator>(const Fixed &other) const {
    return (toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const {
    return (toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const {
    return (toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const {
    return (toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed &other) const {
    return (toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const {
    return (toFloat() != other.toFloat());
}

const Fixed Fixed::operator+(const Fixed &other) const {
    return (toFloat() + other.toFloat());
}

const Fixed Fixed::operator-(const Fixed &other) const {
    return (toFloat() - other.toFloat());
}

const Fixed Fixed::operator*(const Fixed &other) const {
    return (toFloat() * other.toFloat());
}

const Fixed Fixed::operator/(const Fixed &other) const {
    return (toFloat() / other.toFloat());
}

Fixed &Fixed::operator++() {
    this->value++;
    return *this;
}

const Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->value++;
    return temp;
}

Fixed &Fixed::operator--() {
    this->value--;
    return *this;
}

const Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->value--;
    return temp;
}

Fixed &Fixed::max(Fixed &x, Fixed &y) {
    if(x >= y)
        return x;
    return y;
}

const Fixed &Fixed::max(const Fixed &x, const Fixed &y) {
    if(x >= y)
        return x;
    return y;
}

Fixed &Fixed::min(Fixed &x, Fixed &y) {
    if(x <= y)
        return x;
    return y;
}

const Fixed &Fixed::min(const Fixed &x, const Fixed &y) {
    if(x <= y)
        return x;
    return y;
}





