#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat & operator = ( const WrongCat & );
    WrongCat ( const WrongCat & );
    virtual ~WrongCat();

    WrongCat( std::string );
    void makeSound() const;
};

#endif
