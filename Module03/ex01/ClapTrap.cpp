#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "CallTrap's default constructor called" << std::endl;
}

void ClapTrap::setName(std::string name) {
    this->name = name;
}

std::string ClapTrap::getName () const {
    return name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
    this->hitPoints = hitPoints;
}

ClapTrap::ClapTrap( std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage ) {
    std::cout << "ClapTrap's constructor called. " << std::endl;
    this->name = name;
    this->hitPoints = hitPoints;
    this->energyPoints = energyPoints;
    this->attackDamage = attackDamage;
}

unsigned int ClapTrap::getHitPoints() const {
    return this->hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
    this->energyPoints = energyPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
    this->attackDamage = attackDamage;
}

unsigned int ClapTrap::getAttackDamage() const {
    return this->attackDamage;
}

ClapTrap::ClapTrap( const std::string name )  : hitPoints(10), energyPoints(10), attackDamage(0) {

    this->setName(name);
    std::cout << "ClapTrap's constructor called. " << std::endl;

}

ClapTrap & ClapTrap::operator = (const ClapTrap &clapTrap) {

    if (this != &clapTrap) {
        this->name = clapTrap.getName();
        this->hitPoints = clapTrap.getHitPoints();
        this->energyPoints = clapTrap.getEnergyPoints();
        this->attackDamage = clapTrap.getAttackDamage();
    }

    std::cout << "Assignment operator ClapTrap" << std::endl;

    return *this;
}

ClapTrap::ClapTrap ( const ClapTrap & clapTrap ) {

    *this = clapTrap;
    std::cout << "Copy constructor ClapTrap" << std::endl;

}


ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap's destructor called" << std::endl;
}

bool ClapTrap::isAlive() {
    if (hitPoints <= 0) {
        return false;
    }
    return true;
}

bool ClapTrap::isActive() {

    if (0 >= energyPoints) {
        return false;
    }
    return true;
}

void ClapTrap::attack( const std::string & target) {
    bool active = isActive();
    bool alive = isAlive();
    if ( isActive() && isAlive() ) {
        std::cout <<  name\
                    << " attacks " << target\
                    << " causing " << attackDamage\
                    << " points of damage"\
                    << std::endl;
        energyPoints--;
    } else {
        if (!alive) {
            std::cout << name << " can not to attack : Hit Points is 0" << std::endl;
        } else if (!active) {
            std::cout << name << " can not to attack : Energy Points 0" << std::endl;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (isActive()) {
        if (!isAlive()) {
            std::cout << "ClapTrap " << name\
                    << " was revived, health increased by "\
                    << amount << " hit points"\
                    << std::endl;
        } else {
            std::cout << "ClapTrap " << name\
                    << " was repaired, health increased by "\
                    << amount << " hit points"\
                    << std::endl;
        }
        energyPoints--;
        hitPoints += amount;
    }
}

void ClapTrap::takeDamage( unsigned int amount ) {
    hitPoints -= amount;
    if (!isAlive()) {
        std::cout << "ClapTrap " << name\
                << " was killed, health decreased by "\
                << amount << " hit points"\
                << std::endl;
        hitPoints = 0;
    } else {
        std::cout << "ClapTrap " << name\
                << " was damaged, health decreased by "\
                << amount << " hit points"\
                << std::endl;
    }

}

std::ostream &operator << ( std::ostream &out, ClapTrap const &clapTrap ) {

    out << "Name : " <<  clapTrap.getName()\
        << "; Attack damage : " << clapTrap.getAttackDamage()\
        << "; HP : " << clapTrap.getHitPoints()\
        << "; Energy : " << clapTrap.getEnergyPoints();
    return out;
}