#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {

public:

    FragTrap (  std::string name );

    FragTrap();
    FragTrap ( const FragTrap & );
    FragTrap & operator = ( const FragTrap & );
    ~FragTrap();

    void attack( const std::string &  );
    void highFivesGuys( void );
};



#endif