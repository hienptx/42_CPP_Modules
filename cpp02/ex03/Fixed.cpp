#include "Fixed.hpp"

// n << _fracBits = n * 2^_fracBits
// is a bitwise operation used to scale an integer into a fixed-point format.
// <<: Bitwise Shift Left
// For floating-point values, you must use multiplication since the left-shift operator is not applicable

/* Othordox Canonical Form */
Fixed::Fixed():_val(0) { // constructor
    // std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy): _val(copy._val) { // copy constructor
    // std::cout << "Copy constructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed& copy) { //assigment, deep copy
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        _val = copy._val;
    return (*this);
}
Fixed::~Fixed() { // deconstructor
    // std::cout << "Destructor called" << std::endl;
}

// constructors of fixed point value
Fixed::Fixed(const int val): _val(val << _fracBits) { // int to fp
    // std::cout << "Int constructor called" << std::endl;
} 
Fixed::Fixed(const float val): _val(roundf(val * (1 << _fracBits))) { // float to fp
    // std::cout << "Float constructor called" << std::endl;
}

// conversion
float Fixed::toFloat(void) const {
    return (static_cast<float>(_val) / (1 << _fracBits));
}
int Fixed::toInt(void) const{
    return(_val *  (1 << _fracBits));
}

// overloading operators
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) { // << -> to cout user-defined data type
    os << fixed.toFloat();
    return os;
}

// overload comparison operators
bool Fixed::operator<(const Fixed& val) const {
    return (this->toFloat() < val.toFloat()); 
}
bool Fixed::operator<=(const Fixed& val) const {
    return (this->toFloat() <= val.toFloat()); 
}
bool Fixed::operator>(const Fixed& val) const {
    return (this->toFloat() > val.toFloat()); 
}
bool Fixed::operator>=(const Fixed& val) const {
    return (this->toFloat() >= val.toFloat()); 
}
bool Fixed::operator==(const Fixed& val) const {
    return (this->toFloat() == val.toFloat()); 
}
bool Fixed::operator!=(const Fixed& val) const {
    return (this->toFloat() != val.toFloat());
}

float Fixed::operator+(const Fixed& val) const {
    return (this->toFloat() + val.toFloat()); 
}

// overload arithmetic operators
float Fixed::operator-(const Fixed& val) const {
    return (this->toFloat() - val.toFloat()); 
}
float Fixed::operator*(const Fixed& val) const {
    return (this->toFloat() * val.toFloat()); 
}
float Fixed::operator/(const Fixed& val) const {
    return (this->toFloat() / val.toFloat()); 
}

// overload increment & decrement
Fixed &Fixed::operator++() {
    _val += 1;
    return (*this);
}
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _val += 1;
    return (temp);
}
Fixed& Fixed::operator--() {
    _val -= 1;
    return (*this);
}
Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _val -= 1;
    return (temp);
}

//overload static member functions 
Fixed Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}
Fixed Fixed::min(const Fixed& a, const Fixed& b) {
    return (a.toFloat() < b.toFloat()) ? a : b;
}
Fixed Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}
Fixed Fixed::max(const Fixed& a, const Fixed& b) {
    return (a.toFloat() > b.toFloat()) ? a : b;
}
