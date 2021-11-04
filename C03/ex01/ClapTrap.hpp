#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    protected:
        std::string _Name;
        int _Hitpoints;
        int _Energy_points;
        int _Attack_damage;
    public:
        ClapTrap( void );
        ClapTrap(std::string x);
        ClapTrap( const ClapTrap & src);
        ClapTrap& operator=(const ClapTrap& comp);
        ~ClapTrap( void );
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName()const;
        unsigned int getHitpoints()const;
        unsigned int getEnergy_points()const;
        unsigned int getAttack_damage()const;
    
        void setName(std::string name);
        void setHitpoints(unsigned int hp);
        void setEnergy_points(unsigned int ep);
        void setAttack_damage(unsigned int ad);
};

#endif