#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) {
        return;
}

PhoneBook::~PhoneBook( void ) {
        return;
}

int PhoneBook::addContact( void ) {
        
        std::cout << "\033[1m\033[33m";
        std::cout << "|*******************************************|" << std::endl;
        std::cout << "|************ ADD YOUR CONTACT *************|" <<std::endl;
        std::cout << "|*******************************************|\n" << std::endl;
        std::cout << " First Name    : ";
        std::getline(std::cin, this->firstName);
        std::cout << " Last Name     : ";
        std::getline(std::cin, this->lastName);
        std::cout << " Nickname      : ";
        std::getline(std::cin, this->nickname);
        std::cout << " Phone Number  : " ;
        std::getline(std::cin, this->phoneNumber);
        std::cout << " Darkest Secret: ";
        std::getline(std::cin, this->darskestSecret);
        std::cout << "\033[0m" << std::endl;

        return (0);
}

void PhoneBook::printContact( void ) {
       
        std::cout << "\033[32m";
        std::cout << "|*******************************************|" << std::endl;
        std::cout << "|**************** PhoneBook ****************|" <<std::endl;
        std::cout << "|*******************************************|" << std::endl;
        std::cout << " First Name    : " << this->firstName << std::endl;
        std::cout << " Last Name     : " << this->lastName << std::endl;
        std::cout << " Nickname      : " << this->nickname << std::endl;
        std::cout << " Phone Number  : " << this->phoneNumber << std::endl;
        std::cout << " Darkest Secret: " << this->darskestSecret << "\033[0m " <<std::endl;

}
