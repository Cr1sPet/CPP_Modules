#include "ClapTrap.hpp"
#include <iostream>


int main( void ) {
    
    ClapTrap clapTrap ("Bomb");
    clapTrap.attack("Serj");
    clapTrap.takeDamage(11);
    return 0;
}