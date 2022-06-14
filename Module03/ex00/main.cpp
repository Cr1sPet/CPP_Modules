#include "ClapTrap.hpp"
#include <iostream>


int main( void ) {

    ClapTrap clap ("Clap");
    std::cout << clap << std::endl << std::endl;

    ClapTrap trap ("Trap");
    std::cout << trap << std::endl << std::endl;

    trap.attack(clap.getName());

    std::cout << trap << std::endl << std::endl;

    trap.takeDamage(11);

    std::cout << trap << std::endl << std::endl;

    trap.beRepaired(5);

    std::cout << trap << std::endl << std::endl;

    for (int i = 0; i < 8; i++) {
        trap.attack(clap.getName());
    }

    std::cout << std::endl;

    trap.attack(clap.getName());

    std::cout << trap << std::endl << std::endl;


    return 0;
}