#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {

private:

    std::string name;

public:

    void announce( void );

    Zombie();

    Zombie(std::string name) {
        this->name = name;
    }

    void setName(std::string name);

    ~Zombie();
    
};


Zombie* zombieHorde( int N, std::string name);

#endif