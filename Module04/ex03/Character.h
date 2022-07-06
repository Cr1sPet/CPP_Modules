//
// Created by Josue Chopped on 6/30/22.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"
#include "AMateria.h"


class AMateria;
class ICharacter;

class Character : public ICharacter {

private:

    std::string name;

    AMateria *materiaInventory[4];

    void fillNullMateria();

public:

    Character();
    Character & operator = ( const Character & );
    Character ( const Character & );
    ~Character();

    Character(std::string name);

    void printMaterias();

    std::string const & getName() const;
    void equip(AMateria *m);
    void unequip( int idx );
    void use(int idx, ICharacter& target);
};


#endif //CPP_MODULES_CHARACTER_H
