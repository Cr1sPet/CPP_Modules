#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    ClapTrap clap("Clap");
    ClapTrap trap("Trap");
    ScavTrap scav("unit");

    clap.attack(trap.getName());
    trap.takeDamage(clap.getAttackDamage());
    trap.beRepaired(3);
    trap.takeDamage(5);
    trap.beRepaired(2);
    scav.attack(clap.getName());
    scav.takeDamage(3);
    scav.beRepaired(3);
    std::cout << clap;
    std::cout << trap;
    std::cout << scav;

}