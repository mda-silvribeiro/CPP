#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    ideas = new Brain();
}

Dog::Dog( Dog const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog( void ) {
    std::cout << "Destructor called" << std::endl;
    delete ideas;
}

void Dog::makeSound() const{
    std::cout << "Woof, woof" << std::endl;
}

Brain *Dog::getBrain( void ) const {
    return (this->ideas);
}   
Dog 	&Dog::operator=( Dog const &cmp)
{
	std::cout << "Dog Assignement operator called" << std::endl;
	this->type = cmp.getType();
    ideas = new Brain;
	*(this->ideas) = *(cmp.getBrain());
	return (*this);
}


AAnimal	&Dog::operator=( AAnimal const &cmp )
{
	std::cout << "Animal Assignement operator for Dog called" << std::endl;
	this->type = cmp.getType();
    ideas = new Brain;
	*(this->ideas) = *(cmp.getBrain());
	return *this;
}