#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    std::cout << "Initialling default" << std::endl;
    _Name = "default";
    _Hitpoints = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string x) : _Name(x) {
    _Hitpoints = 10;
    _Energy_points = 10;
    _Attack_damage = 0;
    std::cout << "Name created !" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src) {
    *this = src;
    std::cout << "ClapTrap copy !" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& comp) {
    _Name = comp._Name;
    _Hitpoints = comp._Hitpoints;
    _Energy_points = comp._Energy_points;
    _Attack_damage = comp._Attack_damage;
    std::cout << "Assignation operator called" << std::endl;

    return (*this);
}

void ClapTrap::attack(std::string const & target) {
    if (_Hitpoints > 0)
    {
        std::cout << "\033[1;31m\033[1;43mClapTrap " << _Name << " attack " << target << ", causing " << _Attack_damage;
        std::cout << " point of damage!\033[0m" << std::endl;
        _Hitpoints--;
    }
    else
    {
        std::cout << "\033[1;33m\033[1;41mClapTrap " << _Name << " has no Hitpoints to Attack\033[0m" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    _Energy_points -= amount;
    if (_Energy_points < 0)
        std::cout << "\033[1;31m\033[0;41mClapTrap " << _Name << " took " << amount << " damage and were knocked out\033[0m" << std::endl;
    else
    {
        std::cout << "\033[1;33m\033[1;41mClapTrap " << _Name << " took " << amount << " damage and got ";
        std::cout << _Energy_points << " energy points left\033[0m" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    _Energy_points += amount;
    std::cout << "\033[1;32m\033[1;44mClapTrap " << _Name << " won " << amount << " energy Points";
    std::cout << " now you have "<< _Energy_points << " energy points \033[0m" << std::endl; 
}


ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap destroyed !" << std::endl;
}

