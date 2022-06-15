#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {

public:

    void guardGate();
    ScavTrap (  std::string name );

    ScavTrap();
    ScavTrap ( const ScavTrap & );
    ScavTrap & operator = ( const ScavTrap & );
    ~ScavTrap();

    void attack( const std::string &  );

};



#endif