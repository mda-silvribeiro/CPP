#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        AMateria *_inventory[4];
        std::string _n;
        int _equiped_idx;
    public:
        Character( void );
        Character( const std::string & n);
        Character( const Character & src);
        ~Character( void );
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif