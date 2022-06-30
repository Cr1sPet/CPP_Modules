//
// Created by Josue Chopped on 6/30/22.
//

#include "Ice.h"

Ice::Ice() {

    std::cout << "Ice constructor" << std::endl;
    this->type = "ice";

}

AMateria *Ice::clone() const {

    return new Ice();

}

Ice::~Ice() {

    std::cout << "Ice destructor" << std::endl;

}