#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) {
    std::cout << "ScavTrap's constructor calles" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap's destructor called" << std::endl;
}

void FragTrap::attack( const std::string & target) {
    if (isActive()) {
        std::cout << "FragTrap " << this->getName()\
                << " attacks " << target\
                << " causing " << this->getAttackDamage()\
                << " points of damage"\
                << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
}

void FragTrap::highFivesGuy() {
    std::cout << this->getName() << " give me a five!" << std::endl;
}
