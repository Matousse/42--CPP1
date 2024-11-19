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

    // Constructeur de recopie
    Fixed(const Fixed& other);

    // Surcharge de l'opérateur d'affectation
    Fixed& operator=(const Fixed& other);

    // Constructeur pour les int vers virgule flottante
    Fixed(const int n);

    // Constructeur pour les floats vers virgule flottante
    Fixed(const float n);

    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);


    float toFloat(void) const;
    int toInt(void) const;
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);


};

#endif
