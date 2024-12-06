#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
    // std::cout << "Point constructor called" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y) {};

Point::Point(const Point &copy): _x(copy._x), _y(copy._y) {
    // std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &copy) {
    (void)copy;
    // std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Point::~Point(){
    // std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX() const {
    return(_x);
}

Fixed Point::getY() const {
    return(_y);
}