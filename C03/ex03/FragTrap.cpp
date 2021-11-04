#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    setName("default");
    setHitpoints(100);
    setEnergy_points(100);
    setAttack_damage(30);
    std::cout << "default" << std::endl;
}

FragTrap::FragTrap(std::string s) {
    setName(s);
    setHitpoints(100);
    setEnergy_points(100);
    setAttack_damage(30);
     std::cout << "Name created !" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src ) {
    *this = src;
    std::cout << "FragTrap copy !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& comp ) {
    _Name = comp._Name;
    _Hitpoints = comp._Hitpoints;
    _Energy_points = comp._Energy_points;
    _Attack_damage = comp._Attack_damage;
     std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

void  FragTrap::highFivesGuys( void ) {
    std::cout << _Name << " request high fives !" << std::endl;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap destroyed !" << std::endl;
}