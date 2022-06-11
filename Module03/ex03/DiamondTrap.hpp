#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private:

    std::string name;

public:

    void whoAmI();
    DiamondTrap( std::string );
    ~DiamondTrap();
    using ScavTrap::attack;

};

#endif