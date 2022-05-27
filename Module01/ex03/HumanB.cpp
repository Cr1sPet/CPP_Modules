
#include "HumanB.hpp"
#include <iostream>

void HumanB::attack() {
    std::cout << name\
            << " attacks with their "\
            << weapon->getType()\
            << std::endl;
}

HumanB::HumanB ( std::string name ) {
    this->name = name;
    this->weapon = NULL;
}

void HumanB::setWeapon( Weapon &weapon ) {
    this->weapon = &weapon;
}