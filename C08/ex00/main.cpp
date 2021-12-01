#include "easyfind.hpp"

int main( void ) {

    std::list<int>  ex1;
    ex1.push_back(42);
    ex1.push_back(21);
    ex1.push_back(0);
    ex1.push_back(22);

    std::list<int>::iterator it;
    std::cout << "List: " << std::endl;
    for (it = ex1.begin(); it != ex1.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "easyfind:  right argument: " << std::endl;
    try 
	{
		it = easyfind(ex1,21);
        std::cout << *it << std::endl;
	} 
	catch (std::exception& e)
	{
			std::cout << e.what() << std::endl;
	}
    std::cout << "easyfind:  wrong argument: " << std::endl;
    try 
	{
		it = easyfind(ex1,1);
        std::cout << *it << std::endl;
	} 
	catch (std::exception& e)
	{
			std::cout << e.what() << std::endl;
	}
    return (0);
}