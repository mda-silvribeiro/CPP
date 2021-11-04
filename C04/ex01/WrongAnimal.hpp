#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal( const WrongAnimal &src);
        virtual ~WrongAnimal( void );
        WrongAnimal& operator=( const WrongAnimal &cmp );
        const std::string& getType( void ) const ;
        virtual void makeSound( void ) const;
};

#endif