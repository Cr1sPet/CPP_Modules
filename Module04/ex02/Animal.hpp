#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;
public:

    Animal();
    Animal & operator = ( const Animal & );
    Animal ( const Animal & );
    virtual ~Animal();

    Animal( std::string );
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif
