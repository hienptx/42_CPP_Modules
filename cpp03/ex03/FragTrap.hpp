#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif