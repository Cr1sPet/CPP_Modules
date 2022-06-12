#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap's constructor calles" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap's destructor called" << std::endl;
}

void ScavTrap::attack( const std::string & target) {
    if (isActive()) {
        std::cout << "ScavTrap " << this->getName()\
                << " attacks " << target\
                << " causing " << this->getAttackDamage()\
                << " points of damage"\
                << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
