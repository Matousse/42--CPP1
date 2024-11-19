#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_value = other._value;
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

Fixed::Fixed(const int n) {
    _value = n << _fractionalBits;
     std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) {
    _value = roundf(n * (1 << _fractionalBits));
     std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

// Opérateurs de comparaison

bool Fixed::operator>(const Fixed& other) const {
    return this->_value > other._value;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->_value != other._value;
}

// Opérateurs arithmétiques

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->_value + other._value);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->_value - other._value);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    long temp = (long)this->_value * (long)other._value;
    result.setRawBits(temp >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    long temp = ((long)this->_value << _fractionalBits) / other._value;
    result.setRawBits(temp);
    return result;
}

// Opérateurs d'incrémentation/décrémentation

Fixed& Fixed::operator++() {
    this->_value += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--() {
    this->_value -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}

// Fonctions min/max statiques

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}
