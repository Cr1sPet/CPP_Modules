#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () {

    std::cout << "Default constructor called DiamondTrap" << std::endl;

}

DiamondTrap::DiamondTrap (  std::string name ) : ClapTrap(name) {

    this->name = name;
    ClapTrap::setName(this->name + "_clap_name");
    this->setHitPoints((FragTrap::getHitPoints()));
    this->setEnergyPoints(ScavTrap::getEnergyPoints());
    this->setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap constructor" << std::endl;

}

DiamondTrap::~DiamondTrap() {

    std::cout << "Diamond Trap destructor called" << std::endl;

}


DiamondTrap::DiamondTrap ( const DiamondTrap & diamondTrap ) : ClapTrap( diamondTrap ), FragTrap(diamondTrap), ScavTrap(diamondTrap) {

    std::cout << "Copy constructor DiamondTrap" << std::endl;

}

DiamondTrap & DiamondTrap::operator = ( const DiamondTrap & diamondTrap ) {

    ClapTrap::operator=(diamondTrap);
    std::cout << "Assignment operator DiamondTrap" << std::endl;
    return  *this;

}

void DiamondTrap::whoAmI() {

    std::cout << "I am " << this->name << " clapTrap name : " <<
              ClapTrap::getName() << " HP : " << this->getHitPoints() << " Energy: " <<
              this->getEnergyPoints() << " attackDamage: " << this->getAttackDamage() <<
              std::endl;

}
