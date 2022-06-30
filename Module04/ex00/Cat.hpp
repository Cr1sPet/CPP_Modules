#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

public:
    Cat();
    Cat & operator = ( const Cat & );
    Cat ( const Cat & );
    virtual ~Cat();

    Cat( std::string );
    void makeSound() const;
};

#endif
