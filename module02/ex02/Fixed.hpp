#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:

    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    Fixed(const int n);
    Fixed(const float n);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

    // Opérateurs de comparaison
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Opérateurs arithmétiques
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Opérateurs d'incrémentation/décrémentation
    Fixed& operator++();    // Pré-incrémentation
    Fixed operator++(int);  // Post-incrémentation
    Fixed& operator--();    // Pré-décrémentation
    Fixed operator--(int);  // Post-décrémentation

    // Fonctions min/max statiques
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

};

#endif
