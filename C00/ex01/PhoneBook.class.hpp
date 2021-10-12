#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H
# include <iostream>
# include <string>

class PhoneBook {

public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darskestSecret;
    int i;

    PhoneBook( void );
    ~PhoneBook( void );

    int addContact( void);
    void printContact( void );
};

#endif