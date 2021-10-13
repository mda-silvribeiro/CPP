#include "Karen.hpp"

int main( void )
{
    void (Karen :: *ptr1_f) (std::string) = &Karen :: complain;

    Karen ob;
    (ob.*ptr1_f)("INFO");
    (ob.*ptr1_f)("WARNING");
    (ob.*ptr1_f)("ERROR");
    (ob.*ptr1_f)("DEBUG");
}