#include "ScavTrap.hpp"

void ScavTrap::guardGate() {

    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;

}

ScavTrap::ScavTrap() : ClapTrap( "default_scav", 100, 50, 20) {
    std::cout << "Default constructor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap ( const ScavTrap & scavTrap ) : ClapTrap( scavTrap ) {

    std::cout << "Copy constructor ScavTrap" << std::endl;

}

ScavTrap & ScavTrap::operator = ( const ScavTrap & scavTrap ) {
    ClapTrap::operator=(scavTrap);
    std::cout << "Assignment operator ScavTrap" << std::endl;
    return  *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap (  std::string name ) {

    this->name= name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap Constructor" << std::endl;
}


void ScavTrap::attack(const std::string & target) {
    std::cout << "ScavTrap ";
    ClapTrap::attack(target);
}


