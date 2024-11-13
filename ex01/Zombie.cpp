#include "Zombie.hpp"

Zombie::Zombie() //constructor
{
    std::cout << "Zombie constructed" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie deconstructed" << std::endl;
}

void Zombie::announce(void) //member function
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
