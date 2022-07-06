//
// Created by Josue Chopped on 6/30/22.
//

#include "Character.h"

/*
 * Canonical
 */

Character::Character() {

    this->fillNullMateria();
//    std::cout << "default constructor Character" << std::endl;

}

Character & Character::operator = ( const Character & character ) {

    if (this != &character) {
        for (int i = 0; i < 4; i++) {
            if (this->materiaInventory[i] != NULL) {
                delete this->materiaInventory[i];
            }
            if (character.materiaInventory[i] != NULL ) {
                this->materiaInventory[i] = character.materiaInventory[i]->clone();
            } else {
                this->materiaInventory[i] = NULL;
            }
        }
        this->name = character.name;
    }

   std::cout << "Assignment operator Character" << std::endl;
    return *this;
}
Character::Character ( const Character & character ) {

    for (int i = 0; i < 4; i++) {
        if (this->materiaInventory[i] != NULL) {
            delete this->materiaInventory[i];
        }
        this->materiaInventory[i] = character.materiaInventory[i]->clone();
    }
    this->name = character.name;

//    std::cout << "Character copy constructor" << std::endl;

}

Character::~Character() {

    for (int i = 0; i < 4; i++) {
        if (this->materiaInventory[i] != NULL) {
            delete this->materiaInventory[i];
            std::cout << "delete " << i << std::endl;
        }
    }
//    std::cout << "default destructor Character" << std::endl;

}

/*
 * Getter
 */

const std::string &Character::getName() const {
    return name;
}

/*
 * Init
 */

void Character::fillNullMateria() {

    for (int i = 0; i < 4; i++) {
        materiaInventory[i] = NULL;
    }

}

Character::Character(std::string name) {
    this->name = name;
    this->fillNullMateria();
}

/*
 * Logic
 */

void Character::equip(AMateria *materia) {

    for (int i = 0; i < 4; i++) {
        if (this->materiaInventory[i] == NULL) {
            this->materiaInventory[i] = materia;
//            std::cout << "Character equiped materia " << materia->getType() << std::endl;
            break;
        }
    }

}

void Character::unequip(int idx) {
    if ((idx > 3 || idx < 0) || NULL == this->materiaInventory[idx]) {
        return;
//        std::cout << "Character cannot to unequip materia by idx == " << idx << std::endl;
    } else {
//        std::cout << "Character unequiped materia " <<  this->materiaInventory[idx]->getType() << std::endl;
        this->materiaInventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if ((idx > 3 || idx < 0) || ( NULL == this->materiaInventory[idx] )) {
        return;
    } else {
        this->materiaInventory[idx]->use(target);
    }
}

void  Character::printMaterias() {
    std::cout << "##########" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->materiaInventory[i]) {
            std::cout << "I == "<< i << " " << this->materiaInventory[i]->getType() << std::endl;
        } else {
            std::cout << std::endl;
        }
    }
    std::cout << "##########" << std::endl;
}