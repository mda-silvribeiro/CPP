#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* ideas;
    public:
        Dog( void );
        Dog( const Dog &src);
        virtual ~Dog( void );
        void makeSound() const;
        virtual Brain *getBrain( void ) const;
        Dog	&operator=( Dog const &cmp );
};

#endif