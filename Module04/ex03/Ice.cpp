//
// Created by Josue Chopped on 6/30/22.
//

#include "Ice.h"

/*
 * Canonical form
 */

Ice::Ice() {

    std::cout << "Ice constructor" << std::endl;
    this->type = "ice";

}


Ice & Ice::operator = ( const Ice & ice ) {

    if (this != &ice) {

    }

    std::cout << "Assignment operator Ice" << std::endl;
    return *this;
}
Ice::Ice ( const Ice & ice ) : AMateria(ice) {

    std::cout << "Ice copy constructor" << std::endl;

}


Ice::~Ice() {

    std::cout << "Ice destructor" << std::endl;

}


/*
 * Logic
 */

Ice *Ice::clone() const {

    std::cout << "Ice clone" << std::endl;
    return new Ice(*this);

}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
