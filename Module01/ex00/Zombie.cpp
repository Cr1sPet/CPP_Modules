#include "Zombie.hpp"

#include <iostream>

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    
}

Zombie::~Zombie() {
    std::cout << "Bye from " << name << std::endl;
}