#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _name;
    public:
        DiamondTrap( void );
        DiamondTrap( std::string s );
        DiamondTrap( const DiamondTrap & src);
        ~DiamondTrap( void );
        DiamondTrap& operator=(const DiamondTrap& cmp);
        void attack(std::string const & target);
        void whoAmI();

};

#endif