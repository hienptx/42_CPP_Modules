
#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>

class Fixed
{
    private:
        int _val;
        //
        static const int8_t _fracBits = 8;

    public:
        // defaut constructor
        Fixed();
        // copy constructor
        Fixed(const Fixed &copy);
        // assignment operator overload, deep copying
        Fixed& operator = (Fixed& copy);
        // deconstructor
        ~Fixed();
        //get _val member function
        int getRawBits(void) const;
        //set _val member function
        void setRawBits(int const raw);
};

#endif