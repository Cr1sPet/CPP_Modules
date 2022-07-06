//
// Created by Josue Chopped on 6/30/22.
//

#include "Cure.h"

#include "Ice.h"


/*
 * Canonical form
 */

Cure::Cure() {

//    std::cout << "Cure constructor" << std::endl;
    this->type = "cure";

}

Cure & Cure::operator = ( const Cure & cure ) {

    if (this != &cure) {

    }

//    std::cout << "Assignment operator Cure" << std::endl;
    return *this;
}
Cure::Cure ( const Cure & cure ) : AMateria(cure) {

//    std::cout << "Cure copy constructor" << std::endl;

}

Cure::~Cure() {

//    std::cout << "Cure destructor" << std::endl;

}

/*
 * Logic
 */

Cure *Cure::clone() const {

//    std::cout << "Cure clone" << std::endl;
    return new Cure(*this);

}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " + target.getName() +"’s wounds *" << std::endl;
}
