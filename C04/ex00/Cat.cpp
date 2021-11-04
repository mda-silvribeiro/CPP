#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Cat default Constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat( const Cat &src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat( void ) {
    std::cout << "Destructor called" << std::endl;
}

void Cat::makeSound( void ) const{
    std::cout << "Meeeeeowwwww" << std::endl;
}