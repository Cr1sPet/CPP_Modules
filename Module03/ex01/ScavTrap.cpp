#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap's constructor calles" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
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
