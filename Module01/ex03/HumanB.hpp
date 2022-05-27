#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

private:

    Weapon *weapon;
    std::string name;

public:

    void attack() ;

    HumanB( std::string );

    void setWeapon( Weapon & );

};

#endif