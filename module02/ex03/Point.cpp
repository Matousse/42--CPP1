#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {
}

Point::~Point() {
}

Point& Point::operator=(const Point& other) {
    (void)other;
    return *this;
}

Fixed Point::getX() const {
    return this->_x;
}

Fixed Point::getY() const {
    return this->_y;
}
