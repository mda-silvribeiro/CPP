#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
    std::cout << "Cure default constructor called" << std::endl;
};

Cure::Cure( const Cure & src) : AMateria("cure") {
    std::cout << "Cure Copy constructor called" << std::endl;
    *this = src;
}

Cure::~Cure( void ) {
    std::cout << "Cure constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const & cmp) {
    std::cout << "Cure Assignation operator called" << std::endl;
    _t = cmp._t;
    return (*this);
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter & target) {
    std::cout << "\033[1;32m* heals " << target.getName() <<"'s wounds *\033[0m" << std::endl;
}
