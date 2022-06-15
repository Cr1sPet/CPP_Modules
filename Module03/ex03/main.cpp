#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap dima = DiamondTrap("dima");
    ClapTrap clap = ClapTrap("Clap");

    dima.whoAmI();
    dima.attack(clap.getName());
    dima.takeDamage(10);
    dima.beRepaired(10);
    dima.whoAmI();
}
