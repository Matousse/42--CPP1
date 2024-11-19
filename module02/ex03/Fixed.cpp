#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    _value = n << _fractionalBits;
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(n * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
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

float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

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

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
