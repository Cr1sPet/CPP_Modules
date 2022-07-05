//
// Created by Josue Chopped on 6/30/22.
//

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>

#include "ICharacter.h"

class ICharacter;

class AMateria {

protected:

    std::string type;

public:

    AMateria();
    AMateria & operator = ( const AMateria & );
    AMateria ( const AMateria & );
    virtual ~AMateria();

    AMateria( std::string const & );
    std::string const & getType() const;

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

};


#endif //CPP_MODULES_AMATERIA_H
