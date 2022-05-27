#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {

private:

    Weapon &weapon;
    std::string name;

public:

    void attack( void );

    HumanA( std::string , Weapon & ) ;

};

#endif