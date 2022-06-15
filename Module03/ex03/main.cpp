#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap diamond = DiamondTrap("Diamond");
    FragTrap frag = FragTrap("frag");
    ScavTrap scav = ScavTrap("scav");

    std::cout << std::endl;
    std::cout << frag << std::endl;
    std::cout << std::endl;

    std::cout << scav << std::endl;
    std::cout << std::endl;

    std::cout << diamond << std::endl;
    std::cout << std::endl;

    diamond.attack(frag.getName());
    std::cout << std::endl;
    diamond.takeDamage(100);
    std::cout << std::endl;
    diamond.beRepaired(50);
    std::cout << std::endl;

    diamond.whoAmI();
    std::cout << std::endl;

    diamond.guardGate();
    std::cout << std::endl;


}
