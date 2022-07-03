#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap diamond = DiamondTrap("Diamond");
    std::cout << diamond.getAttackDamage() << std::endl;

    std::cout << diamond << std::endl;

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
    diamond.takeDamage(100);
    diamond.beRepaired(50);
    diamond.whoAmI();
    diamond.guardGate();
    std::cout << std::endl;


}
