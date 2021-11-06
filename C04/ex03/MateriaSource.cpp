#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : n(0) {
    std::cout << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src ) {
    std::cout << "MateriaSource Copy Constructor called" << std::endl;
    *this = src;
}

void    MateriaSource::learnMateria(AMateria* m) {
    if (n < 4)
    {
        _m[n] = m;
        n++;
        std::cout << "analysis of materia " << m->getType() << " completed." << std::endl;
    }
    else
        std::cout << "The material learning processor is full." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    int i;

    i = 0;
    while(type[i] && i < n)
    {
        if ( type == _m[i]->getType())
            return _m[i]->clone();
        i++;
    }
    return NULL;
}

MateriaSource & MateriaSource::operator=(MateriaSource const  &other ) {
    std::cout << "MateriaSource Assignement operator called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (_m[i])
            delete _m[i];
        if (other._m[i])
            _m[i] = other._m[i]->clone();
        else
            _m[i] = NULL;
    }
    return (*this);  
}

MateriaSource::~MateriaSource( void ) {
    std::cout << "MateriaSource Destructor called" << std::endl;
    for(int i = 0; i < 4; i++)
        if(_m[i])
            delete _m[i];
}