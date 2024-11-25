
#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int _val;
        //
        static const int8_t _fracBits = 8;

    public:
        // defaut constructor
        Fixed();
        // Int constructor -> Parameterize constructor
        Fixed(const int val);
        // copy constructor
        Fixed(const float val);
        // copy constructor
        Fixed(const Fixed &copy);
        // assignment operator overload, deep copying
        Fixed& operator = (const Fixed& copy);
        // deconstructor
        ~Fixed();

        //get _val member function
        int getRawBits(void) const;
        //set _val member function
        void setRawBits(int const raw);

        float toFloat(void) const;

        int toInt(void) const;
};

#endif