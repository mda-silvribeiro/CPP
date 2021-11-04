#include "Animal.hpp"

Animal::Animal( void ) {
    std::cout << "Animal Default Constructor called" << std::endl;
};

Animal::Animal( const Animal& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

const std::string &Animal::getType( void ) const{
    return (this->type);
}

void Animal::setType( std::string s) {
    this->type = s;
}

Animal &	Animal::operator=( Animal const & cmp ) {
	std::cout << "Animal Assignement operator called" << std::endl;
	this->type = cmp.getType();
	return (*this);
}

void Animal::makeSound( void ) const {
    std::cout << "uhuuuuuuu" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Destructor called" << std::endl;
    return ;
};