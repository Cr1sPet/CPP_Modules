#include "Zombie.hpp"

#include <iostream>

// Zombie() {}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    
}

Zombie::~Zombie() {
    std::cout << "Bye from " << name << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}