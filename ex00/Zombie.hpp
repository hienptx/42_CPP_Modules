#ifndef ZOMEBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie { // Class declaration

    private:  // Accesss specifier
        std::string name; // Attribute

    public:
        void announce(void) {  // Method/Member function
            std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }

        Zombie(){}
};

#endif