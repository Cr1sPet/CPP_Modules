#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
    FragTrap();
    FragTrap( std::string );
    ~FragTrap();
    void attack( const std::string & );
    void highFivesGuy();
};

#endif