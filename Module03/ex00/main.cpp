#include "ClapTrap.hpp"
#include <iostream>


int main( void ) {
    
    ClapTrap clapTrap ("Bomb");
    clapTrap.attack("Serj");
    clapTrap.takeDamage(8);
    std::cout << clapTrap << std::endl;
    clapTrap.beRepaired(4);
    clapTrap.takeDamage(6);
    clapTrap.beRepaired(3);
    clapTrap.takeDamage(4);
    return 0;
}