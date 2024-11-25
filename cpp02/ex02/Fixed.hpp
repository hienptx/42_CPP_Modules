
#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> 

// n << _fracBits = n * 2^_fracBits
// is a bitwise operation used to scale an integer into a fixed-point format.
// <<: Bitwise Shift Left
class Fixed
{
    private:
        int _val;
        static const int8_t _fracBits = 8;

    public:
        Fixed();
        Fixed(const int val);
        Fixed(const float val);
        Fixed(const Fixed &copy);
        Fixed& operator = (const Fixed& copy);
        ~Fixed();

        float toFloat(void) const;
        int toInt(void) const;

        bool operator<(Fixed& val) {
            return (this->toFloat() < val.toFloat()); 
        }
        bool operator<=(Fixed& val) {
            return (this->toFloat() <= val.toFloat()); 
        }
        bool operator>(Fixed& val) {
            return (this->toFloat() > val.toFloat()); 
        }
        bool operator>=(Fixed& val) {
            return (this->toFloat() >= val.toFloat()); 
        }
        bool operator==(Fixed& val) {
            return (this->toFloat() == val.toFloat()); 
        }
        bool operator!=(Fixed& val) {
            return (this->toFloat() != val.toFloat()); 
        }
        float operator+(Fixed& val) {
            return (this->toFloat() + val.toFloat()); 
        }
        float operator-(Fixed& val) {
            return (this->toFloat() - val.toFloat()); 
        }
        float operator*(Fixed& val) {
            return (this->toFloat() * val.toFloat()); 
        }
        float operator/(Fixed& val) {
            return (this->toFloat() / val.toFloat()); 
        }
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif