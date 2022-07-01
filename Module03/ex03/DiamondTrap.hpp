#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:

    std::string name;

public:

    void whoAmI();
    DiamondTrap();
    DiamondTrap( std::string );
    DiamondTrap ( const DiamondTrap & );
    DiamondTrap & operator = ( const DiamondTrap & );
    ~DiamondTrap();
    using ScavTrap::attack;

};

#endif