#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain* ideas;
    public:
        Cat( void );
        Cat( const Cat &src );
        virtual ~Cat( void );
        void makeSound(void) const;
        virtual Brain *getBrain( void ) const;
        virtual Cat	&operator=( Cat const &cmp );
        virtual AAnimal	&operator=( AAnimal const &rhs );
};

#endif