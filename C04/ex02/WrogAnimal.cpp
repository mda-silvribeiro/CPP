#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
    type = "WrongAnimal";
    std::cout << "Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &cmp ) {
    type = cmp.type;
    return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "Destructor called" << std::endl;
}

const std::string &WrongAnimal::getType( void ) const{
    return (type);
}

void WrongAnimal::makeSound( void ) const{
    std::cout << "Quack, Quack, Quack..." << std::endl;
}