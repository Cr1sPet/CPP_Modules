#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( const std::string name ) {
    std::cout << "Cobstructor called" << std::endl;
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 1;
}

 ClapTrap & ClapTrap::operator = (const ClapTrap &clapTrap) {
    if (this != &clapTrap) {
        this->name = clapTrap.getName();
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName () const {
    return name;
}

void ClapTrap::attack( const std::string & target) {
    if (isActive()) {
        std::cout << "ClapTrap " << name\
                    << " attacks " << target\
                    << " causing " << attackDamage\
                    << " points of damage"\
                    << std::endl;
        energyPoints--;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (isActive()) {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name\
                    << " is repared, health increased by "\
                    << amount << " hit points"\
                    << std::endl;
    }
}

void ClapTrap::takeDamage( unsigned int amount ) {
    if (isActive(amount)) {
        hitPoints -= amount;
        std::cout << "ClapTrap " << name\
                    << " was damaged, health decreased by "\
                    << amount << " hit points"\
                    << std::endl;
    }
}

bool ClapTrap::isActive() {
    if (0 == hitPoints) {
        std::cout << "hit points is null" << std::endl;
        return false;
    }
    if (0 == energyPoints) {
        std::cout << "energy points is null" << std::endl;
        return false;
    }
    return true;
}


bool ClapTrap::isActive(unsigned int amount) {
    if ( (int) (hitPoints - amount) < 0) {
        std::cout << "hit points is null" << std::endl;
        return false;
    }
    if (0 == energyPoints) {
        std::cout << "energy points is null" << std::endl;
        return false;
    }
    return true;
}

