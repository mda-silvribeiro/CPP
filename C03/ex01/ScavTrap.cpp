#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    setName("default");
    setHitpoints(100);
    setEnergy_points(50);
    setAttack_damage(20);
    std::cout << "Initialling default" << std::endl;
}

ScavTrap::ScavTrap(std::string x) {
    setName(x);
    setHitpoints(100);
    setEnergy_points(50);
    setAttack_damage(20);
    std::cout << "Name created !" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src) {
    *this = src;
    std::cout << "ScavTrap copy !" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& comp) {
    _Name = comp._Name;
    _Hitpoints = comp._Hitpoints;
    _Energy_points = comp._Energy_points;
    _Attack_damage = comp._Attack_damage;
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

void ScavTrap::guardGate() {
    std::cout << _Name << " enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap destroyed !" << std::endl;
 }