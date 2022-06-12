#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {

private:

    std::string type;

public:

    std::string const &getType ();

    void setType ( std::string );

    Weapon ( std::string );
};

#endif