#include "Zombie.hpp"

#include <iostream>

// Zombie() {}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    
}

/*
 * Canonical
 */

Zombie::Zombie( void ) {} ;

Zombie & Zombie::operator = (const Zombie &zombie) {

    if (this != &zombie) {
        this->name = zombie.getName();
    }

    return *this;
}

Zombie::Zombie ( const Zombie & zombie ) {

    *this = zombie;
//    std::cout << "Copy constructor Cat" << std::endl;

}

Zombie::~Zombie() {
//    std::cout << "Bye from " << name << std::endl;
}

/*
 * Getters and Setters
 */

std::string Zombie::getName() const {
    return name;
}

void Zombie::setName(std::string name) {
    this->name = name;
}
