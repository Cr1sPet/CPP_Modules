#include "FragTrap.hpp"

//FragTrap::FragTrap() {
//    std::cout << "FragTrap's default constructor calles" << std::endl;
//    this->setName("Default");
//    this->setHitPoints(100);
//    this->setEnergyPoints(50);
//    this->setAttackDamage(20);
//}


FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "FragTrap's constructor calles" << std::endl;
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
