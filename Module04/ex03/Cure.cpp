//
// Created by Josue Chopped on 6/30/22.
//

#include "Cure.h"

#include "Ice.h"

Cure::Cure() {

    std::cout << "Cure constructor" << std::endl;
    this->type = "cure";

}

AMateria *Cure::clone() const {

    return new Cure();

}

Cure::~Cure() {

    std::cout << "Cure destructor" << std::endl;

}