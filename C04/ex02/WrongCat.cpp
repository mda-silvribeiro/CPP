#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
    std::cout << "Default Constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat( void ) {
    std::cout << "Destructor called" << std::endl;
}

void    WrongCat::makeSound() const{
    std::cout << "Sounds like a Animal" << std::endl;
}