#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {

public:

    Weapon weapon;
    std::string name;

    void attack() ;
};

#endif