#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");
    std::cout << scav << std::endl;


    scav.takeDamage(99);
    std::cout << scav << std::endl;
    std::cout << std::endl;

    scav.takeDamage(10);
    std::cout << scav << std::endl;
    std::cout << std::endl;


    scav.beRepaired(50);
    std::cout << scav << std::endl;
    std::cout << std::endl;

    scav.attack(clap.getName());
    std::cout << scav << std::endl;
    std::cout << std::endl;

    scav.guardGate();
    std::cout << std::endl;

    return 0;
}