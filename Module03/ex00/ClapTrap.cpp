#include "ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap() {
    std::cout << "CallTrap's non-arguments constructor called" << std::endl;
}

void ClapTrap::setName(std::string name) {
    this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints) {
    this->hitPoints = hitPoints;
}

int ClapTrap::getHitPoints() const {
    return this->hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
    this->energyPoints = energyPoints;
}

int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}

int ClapTrap::getAttackDamage() const {
    return this->attackDamage;
}



ClapTrap::ClapTrap( const std::string name ) {
    std::cout << "ClapTrap's constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(10);
    this->setEnergyPoints(10);
    this->setAttackDamage(10);
}

ClapTrap & ClapTrap::operator = (const ClapTrap &clapTrap) {
    if (this != &clapTrap) {
        this->name = clapTrap.getName();
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap's destructor called" << std::endl;
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
    if (energyPoints > 0) {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name\
                    << " is repaired, health increased by "\
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

std::ostream &operator << ( std::ostream &out, ClapTrap const &clapTrap ) {

    out << "Clap Trap name : " <<  clapTrap.getName()\
        << "; current HP : " << clapTrap.getHitPoints()\
        << "; current Energy : " << clapTrap.getEnergyPoints();
    return out;
}