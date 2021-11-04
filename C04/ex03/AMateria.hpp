#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria : public ICharacter
{
    protected:
                std::string _t;
    public:
                AMateria(std::string const & type);
                virtual ~AMateria( );
                std::string const & getType() const; //Returns the materia type
                virtual AMateria* clone() const = 0;
                virtual void use(ICharacter & target);
};

#endif