#include "Karen.hpp"

int main( void )
{
    // Karen pointer to member function
    void (Karen :: *ptr1_f) (std::string) = &Karen :: complain;

    //Creating an object of class Karen
    Karen ob;
    //Using a pointet-to-member-function to call the member function complain
    (ob.*ptr1_f)("ERROR");
    (ob.*ptr1_f)("WARNING");
    (ob.*ptr1_f)("INFO");
    (ob.*ptr1_f)("DEBUG");
}