#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "Default constructor FragTrap" << std::endl;
}

FragTrap::FragTrap ( const FragTrap & FragTrap ) : ClapTrap( FragTrap ) {

    std::cout << "Copy constructor FragTrap" << std::endl;

}

FragTrap & FragTrap::operator = ( const FragTrap & FragTrap ) {
    ClapTrap::operator=(FragTrap);
    std::cout << "Assignment operator FragTrap" << std::endl;
    return  *this;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor FragTrap" << std::endl;
}

FragTrap::FragTrap (  std::string name ) {

    this->name= name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Constructor" << std::endl;
}

void FragTrap::attack(const std::string & target) {
    std::cout << "FragTrap ";
    ClapTrap::attack(target);
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->getName() << " give me a five!\n";
}


