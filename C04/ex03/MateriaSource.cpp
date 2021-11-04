#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : n(0) {
    std::cout << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src ) {
    std::cout << "MateriaSource Copy Constructor called" << std::endl;
    *this = src;
}

void    MateriaSource::learnMateria(AMateria* m) {
    
}
MateriaSource::~MateriaSource( void ) {
    std::cout << "MateriaSource Destructor called" << std::endl;
}