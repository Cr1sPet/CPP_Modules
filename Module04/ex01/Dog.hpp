#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal {

private:

    Brain *brain;

public:
    Dog();
    Dog & operator = ( const Dog & );
    Dog ( const Dog & );
    ~Dog();

    Dog( std::string );
    void makeSound() const;
};

#endif
