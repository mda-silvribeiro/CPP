#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal( void );
        Animal( const Animal& src);
        virtual ~Animal( void );
        Animal& operator=( const Animal &cmp );
        virtual void makeSound( void ) const;
        const std::string &getType( void ) const;
        void setType( std::string s);
};

#endif