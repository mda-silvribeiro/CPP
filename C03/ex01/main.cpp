#include "ScavTrap.hpp"

int main()
{
    ScavTrap hus;
    ScavTrap xxx("p2");
    ScavTrap Myself("p4");
    ScavTrap p3(xxx);

    hus.attack("p2");
    xxx.takeDamage(20);
    xxx.beRepaired(3);

    p3.attack("p4");
    Myself.takeDamage(51);

    xxx.attack("default");
    hus.takeDamage(20);
    hus.beRepaired(3);

    return (0);
}