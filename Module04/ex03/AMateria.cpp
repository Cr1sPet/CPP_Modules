//
// Created by Josue Chopped on 6/30/22.
//

#include "AMateria.h"

/*
 * Canonical form
 */

AMateria::AMateria() {
    std::cout << "AMateria constructor" << std::endl;
}

AMateria & AMateria::operator = (const AMateria &aMateria) {

    if (this != &aMateria) {
        this->type = aMateria.type;
    }

    std::cout << "Assignment operator AMateria" << std::endl;

    return *this;
}

AMateria::AMateria ( const AMateria & aMateria ) {

    *this = aMateria;
    std::cout << "Copy constructor AMateria" << std::endl;

}

AMateria::~AMateria() {
    std::cout << "AMateria destructor" << std::endl;
}


/*
 * Getter
 */

std::string const & AMateria::getType() const {
    return this->type;
}

/*
 * Logic
 */

void AMateria::use(ICharacter &target) {
    std::cout << "default use : " << std::cout << target.getName();
}