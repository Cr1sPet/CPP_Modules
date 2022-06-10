#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {

private:

    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
    bool isActive();
    bool isActive(unsigned int amount);


public:

    ClapTrap(std::string name);
    ClapTrap & operator = (const ClapTrap &clapTrap);
    ClapTrap (const ClapTrap & clapTrap) {
        this->name = clapTrap.getName();
    }

    ~ClapTrap();
    std::string getName() const;

    void attack( const std::string & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int getHitPoints() {
        return hitPoints;
    }
    int getEnergyPoints() {
        return energyPoints;
    }

};

#endif