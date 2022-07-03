#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap frag("Frag");
    ScavTrap scav("Scav");
    std::cout << frag << std::endl;
    std::cout << std::endl;

    frag.takeDamage(110);
    std::cout << frag << std::endl;
    std::cout << std::endl;

    frag.beRepaired(50);
    std::cout << frag << std::endl;
    std::cout << std::endl;

    frag.attack(scav.getName());
    std::cout << frag << std::endl;
    std::cout << std::endl;

    frag.highFivesGuys();
    std::cout << std::endl;

    return 0;
}