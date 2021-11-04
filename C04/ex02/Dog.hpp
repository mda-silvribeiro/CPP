#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain* ideas;
    public:
        Dog( void );
        Dog( const Dog &src);
        virtual ~Dog( void );
        void makeSound() const;
        virtual Brain *getBrain( void ) const;
        virtual Dog	&operator=( Dog const &cmp );
        virtual AAnimal	&operator=( AAnimal const &cmp );
};

#endif