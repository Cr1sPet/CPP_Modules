#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <stdlib.h>

class Zombie {

private:

    std::string name;

public:

    void announce( void );

    Zombie ( void );
    Zombie & operator = ( const Zombie & );
    Zombie ( const Zombie & );
    ~Zombie();

    Zombie(std::string name) {
        this->name = name;
    }

    void setName(std::string name);
    std::string getName() const;

};

Zombie* zombieHorde( int N, std::string name);

#endif