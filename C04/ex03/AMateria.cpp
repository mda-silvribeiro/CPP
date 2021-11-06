#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    std::cout << "AMateria constructor called" << std::endl;
    this->_t = type;
};

std::string const &AMateria::getType() const {
    return (this->_t);
};