#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:

    Fixed();

    // Constructeur de recopie
    Fixed(const Fixed& other);

    // Surcharge de l'opérateur d'affectation
    Fixed& operator=(const Fixed& other);

    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
