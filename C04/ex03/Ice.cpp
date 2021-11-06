#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
    std::cout << "Ice default constructor called" << std::endl;
};

Ice::Ice( const Ice & src) : AMateria("ice") {
    std::cout << "Ice Copy constructor called" << std::endl;
    *this = src;
}

Ice::~Ice( void ) {
    std::cout << "Ice constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const & cmp) {
    std::cout << "Ice Assignation operator called" << std::endl;
    _t = cmp._t;
    return (*this);
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}

void Ice::use(ICharacter & target) {
    std::cout << "\033[1;34m* shoots an ice bolt at " << target.getName() << " *\033[0m" << std::endl;
}
