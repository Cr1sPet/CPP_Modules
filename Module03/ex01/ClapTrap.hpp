#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {

private:

    std::string name;
    long hitPoints;
    long energyPoints;
    long attackDamage;
    bool isActive();
    bool isAlive();
    bool isActive( unsigned int );

public:

    ClapTrap();
    ClapTrap & operator = ( const ClapTrap & );
    ClapTrap ( const ClapTrap &  );
    ~ClapTrap();

    ClapTrap(std::string name);
    ClapTrap( std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage );
    std::string getName() const;
    void setName( std::string );
    unsigned int getHitPoints() const;
    void setHitPoints( unsigned int );
    unsigned int getEnergyPoints() const;
    void setEnergyPoints( unsigned int );
    unsigned int getAttackDamage() const;
    void setAttackDamage( unsigned int );

    void attack( const std::string & );
    void takeDamage( unsigned int );
    void beRepaired( unsigned int );

};

std::ostream & operator << ( std::ostream& , const ClapTrap& );


#endif