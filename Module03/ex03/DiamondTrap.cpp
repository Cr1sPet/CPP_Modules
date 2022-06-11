#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( std::string name ) {
    std::cout << "Diamond Trap constructor called" << std::endl;
    this->name = ClapTrap::setName(name.append("_clap_name " ));
    this->setHitPoints(FragTrap::getHitPoints());
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Diamond Trap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string & target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {

}