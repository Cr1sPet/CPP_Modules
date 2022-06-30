//
// Created by Josue Chopped on 6/30/22.
//

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.h"
#include "AMateria.h"

class MateriaSource : public IMateriaSource {

private:
    int index;
    AMateria materias*[4];
public:

    void learnMateria(AMateria *);

};


#endif //MATERIASOURCE_H
