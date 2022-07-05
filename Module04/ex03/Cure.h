//
// Created by Josue Chopped on 6/30/22.
//

#ifndef CURE_H
#define CURE_H

#include <iostream>
#include "AMateria.h"

class Cure : public AMateria {

public:

    Cure();
    Cure & operator = ( const Cure & );
    Cure ( const Cure & );
    ~Cure();

    virtual Cure * clone() const ;
    void use(ICharacter &target);

};


#endif //CPP_MODULES_CURE_H
