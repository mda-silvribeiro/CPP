#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    std::cout << "AMateria constructor called" << std::endl;
    this->_t = type;
}

std::string const &AMateria::getType() const {
    return (this->_t);
}

void AMateria::use(ICharacter & target) {
    if (_t == "ice")
        std::cout << "*shoots an ice bolt at " << target << " *" << std::endl;
    else if (_t == "cure")
        std::cout << "* heals " << target <<"'s wounds *" << std::endl;
}