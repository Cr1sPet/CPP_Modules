//
// Created by Josue Chopped on 6/30/22.
//

#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H


class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //IMATERIASOURCE_H
