#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* ideas;
    public:
        Cat( void );
        Cat( const Cat &src );
        virtual ~Cat( void );
        void makeSound(void) const;
        virtual Brain *getBrain( void ) const;
        virtual Cat	&operator=( Cat const &rhs );
};

#endif