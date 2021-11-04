#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap{

    public:
        FragTrap( void );
        FragTrap(std::string s);
        FragTrap(const FragTrap & src );
        FragTrap& operator=(const FragTrap& comp );
        ~FragTrap( void );
        void  highFivesGuys( void );
};

#endif