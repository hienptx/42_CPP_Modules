#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie                // Class declaration
{
    private:                // Accesss specifier
        std::string name;   // Attribute

    public:
        Zombie();  //constructor
        void set_name(std::string n)
        {
            name = n;
        }
        void announce(void);   //member function
        ~Zombie();              //deconstructor
};

Zombie* zombieHorde(int N, std::string name);

#endif