#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main() {
    // Test avec un point à l'intérieur du triangle
    Point a(0.0f, 0.0f);
    Point b(6.0f, 0.0f);
    Point c(0.0f, 7.0f);

    // Point à l'intérieur
    Point point(3.0f, 3.0f);

    if (bsp(a, b, c, point))
        std::cout << "Le point est dans le triangle!" << std::endl;
    else
        std::cout << "Le point n'est pas dans le triangle!" << std::endl;

    // Test avec un point pile sur une arête
    Point edgePoint(1.0f, 0.0f);

    if (bsp(a, b, c, edgePoint))
        std::cout << "Le point est dans le triangle!" << std::endl;
    else
        std::cout << "Le point n'est pas dans le triangle!" << std::endl;

    return 0;
}
