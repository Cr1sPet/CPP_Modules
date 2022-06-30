#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:

    WrongAnimal();
    WrongAnimal & operator = ( const WrongAnimal & );
    WrongAnimal ( const WrongAnimal & );
    virtual ~WrongAnimal();

    WrongAnimal( std::string );
    std::string const getType() const;
    virtual void makeSound() const;
};

#endif