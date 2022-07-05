//
// Created by Josue Chopped on 6/30/22.
//

#include "MateriaSource.h"

/*
 * Canonical form
 */

MateriaSource::MateriaSource() {

    this->fillNullMateria();
    std::cout << "default constructor MateriaSource" << std::endl;

}

MateriaSource & MateriaSource::operator = ( const MateriaSource & materiaSource ) {

    if (this != &materiaSource) {
        for (int i = 0; i < 4; i++) {
            if (this->materias[i] != NULL) {
                delete this->materias[i];
            }
            this->materias[i] = materiaSource.materias[i]->clone();
        }
    }

    std::cout << "Assignment operator MateriaSource" << std::endl;
    return *this;
}

MateriaSource::MateriaSource ( const MateriaSource & materiaSource ) {

    for (int i = 0; i < 4; i++) {
        if (this->materiaInventory[i] != NULL) {
            delete this->materias[i];
        }
        this->materias[i] = materiaSource.materias[i]->clone();
    }

    std::cout << "MateriaSource copy constructor" << std::endl;

}

MateriaSource::~MateriaSource() {
    std::cout << "destructor MateriaSource" << std::endl;
}

/*
 * Init
 */

void MateriaSource::fillNullMateria() {
    for (int i = 0; i < 4; i++) {
        materias[i] = NULL;
    }
}


/*
 * Logic
 */

void MateriaSource::learnMateria(AMateria *materia) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] == NULL) {
            materias[i] = materia;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (materias[i] != NULL && materias[i]->type == type) {
            return materias[i]->clone();
        }
    }
}