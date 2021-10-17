#include <iostream>
# include <cmath>

int main( void )
{
    int i = 10;
    float a = 9.0577;
    static const int _f = 8;

    int value;

    value = i << _f;
    std::cout << value << std::endl;


    value = (int)(a) << _f;
   // value = value << _f;

    std::cout << value << std::endl;

    value = (int)(roundf( a * (1 << _f)));
    std::cout << value << std::endl;


}