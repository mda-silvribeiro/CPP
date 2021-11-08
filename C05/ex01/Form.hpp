#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
    private:
        const std::string _name;
        bool _whether;
        const int _gradeInit;
        const int _gradeExec;
    public:
        Form( void );
        Form( const Form & src);
        Form( const std::string n,  );

};



#endif