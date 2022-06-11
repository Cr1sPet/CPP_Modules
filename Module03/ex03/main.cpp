#include "ScavTrap.hpp"

int main( void ) {
    
    ScavTrap scavTrap ("Bomb");
    scavTrap.attack("Serj");
    scavTrap.takeDamage(11);
    scavTrap.guardGate();
    return 0;
}