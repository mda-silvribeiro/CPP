#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *_m[4];
    public:
        MateriaSource( void );
        MateriaSource( const MateriaSource & src);
        ~MateriaSource( void );
        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
        MateriaSource &operator=( MateriaSource const  &other );
        int n;
};

#endif