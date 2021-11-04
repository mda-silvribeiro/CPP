#include "Dog.hpp"

Dog::Dog( void ) {
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog( const Dog &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog( void ) {
    std::cout << "Destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Woof, woof" << std::endl;
}