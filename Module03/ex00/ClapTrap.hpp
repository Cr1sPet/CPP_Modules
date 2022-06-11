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

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap & operator = ( const ClapTrap & );
    ClapTrap ( const ClapTrap & clapTrap ) {
        this->name = clapTrap.getName();
    }

    ~ClapTrap();
    std::string getName() const;
    void setName( std::string );
    int getHitPoints() const;
    void setHitPoints( int );
    int getEnergyPoints() const;
    void setEnergyPoints( int );
    int getAttackDamage() const;
    void setAttackDamage( int );

    void attack( const std::string & );
    void takeDamage(unsigned int);
    void beRepaired(unsigned int);

};

std::ostream & operator << ( std::ostream& , const ClapTrap& );


#endif