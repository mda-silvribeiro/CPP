#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Cat default Constructor called" << std::endl;
    type = "Cat";
    ideas = new Brain();
}

Cat::Cat( const Cat &src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat( void ) {
    std::cout << "Destructor called" << std::endl;
    delete ideas;
}

void Cat::makeSound( void ) const{
    std::cout << "Meeeeeowwwww" << std::endl;
}

Brain *Cat::getBrain( void ) const {
    return (ideas);
}

Cat	&Cat::operator=( Cat const &cmp)
{
	std::cout << "Cat Assignement operator called" << std::endl;
	type = cmp.getType();
    ideas = new Brain;
	*(this->ideas) = *(cmp.getBrain());
	return (*this);
}