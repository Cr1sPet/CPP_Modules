#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ClapTrap clap("Clap");
    ClapTrap trap("Trap");
    ScavTrap scav("scav");
    FragTrap frag("frag");

    clap.attack(trap.getName());
    frag.attack(clap.getName());
    trap.takeDamage(clap.getAttackDamage());
    trap.beRepaired(3);
    trap.takeDamage(5);
    trap.beRepaired(2);
    scav.attack(clap.getName());
    scav.takeDamage(3);
    scav.beRepaired(3);
    frag.takeDamage(trap.getAttackDamage());
    frag.beRepaired(4);

    std::cout << trap << std::endl;
    std::cout << clap << std::endl;
    std::cout << frag << std::endl;
    return 0;
}