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
    void fillNullMateria();

public:

    MateriaSource();
    ~MateriaSource();

    void learnMateria(AMateria *);
    AMateria* createMateria(std::string const & type);

};


#endif //MATERIASOURCE_H
