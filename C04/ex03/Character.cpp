#include "Character.hpp"

Character::Character( void ) : _n(""), _equiped_idx(0) {
    std::cout << "Character default constructor called" << std::endl;
    _inventory[0] = NULL;
    _inventory[1] = NULL;
    _inventory[2] = NULL;
};

Character::Character(const std::string & n) : _n(n) {
    std::cout << "Character Name constructor called" << std::endl;
};

Character::Character(const Character & src ) {
    std::cout << "Character Copy constructor called" << std::endl;
    *this = src;
};

Character::~Character( void ) {
    std::cout << "Character Destructor called" << std::endl;

}
std::string const & Character::getName() const {
    return (_n);
}

void Character::equip(AMateria* m) {
    if (_equiped_idx > 3)
        std::cout << "\033[1;31m\033[1;43mYou are fully equipped.\033[0m" << std::endl;
    else
    {
        _inventory[_equiped_idx] = m;
        std::cout << "\033[1;32m\033[1;47mThe equipment " << m->getType() << " been added to the inventory.\033[0m" << std::endl;
        _equiped_idx++;
    }
}

void Character::unequip(int idx) {
    if (_equiped_idx == 0)
        std::cout << "\033[1;33m\033[1;41mYou don't have any equipment.\033[0m" << std::endl;
    else if (!(_inventory[idx]))
        std::cout << "You don't have any equipment at pos " <<  idx << std::endl;
    else if (_inventory[idx]) 
    {
        _inventory[idx] = NULL;
        _equiped_idx--;
        _equiped_idx = idx;
        if (_inventory[idx] == NULL)
            std::cout << "\033[1;32mmThe equipment at position "<< idx << " was successfully unequipped.\033[0m" << std::endl;
    }
}

void Character::use(int idx, ICharacter& target) {
    _inventory[idx]->use(target);
}

