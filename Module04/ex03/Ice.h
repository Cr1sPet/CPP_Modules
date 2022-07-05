//
// Created by Josue Chopped on 6/30/22.
//

#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice : public AMateria {

public:

    Ice();
    Ice & operator = ( const Ice & );
    Ice ( const Ice & );
    ~Ice();

    virtual Ice * clone() const ;
    void use(ICharacter &target);
};


#endif //CPP_MODULES_ICE_H
