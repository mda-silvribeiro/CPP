#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure( void );
        Cure( const Cure & src);
        ~Cure( void );
        Cure &operator=(Cure const & cmp);
        virtual AMateria* clone() const;
        virtual void use(ICharacter & target);
};

#endif