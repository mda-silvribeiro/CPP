#include "AAnimal.hpp"

const std::string &AAnimal::getType( void ) const{
    return (this->type);
}

AAnimal::~AAnimal( void ) {
    std::cout << "AAnimal Destructor called" << std::endl;
    return ;
};