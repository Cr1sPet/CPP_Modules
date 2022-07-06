#include "AMateria.h"
#include "Cure.h"
#include "Ice.h"
#include "Character.h"
#include "ICharacter.h"
#include "MateriaSource.h"
#include "IMateriaSource.h"

int main (void) {

    Character *bob = new Character("Bob");
    Character *carl = new Character("Carl");

    std::cout << "before\n";

    bob = carl;

    delete bob;
    delete carl;

    return 0;
}