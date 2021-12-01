#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <list>
#include <algorithm>
#include <iostream>

template< typename T >

typename T::iterator easyfind(T &a, int b) {
    typename T::iterator    aux;
    
    aux = find(a.begin(), a.end(), b);
    if (a.end() != aux)
        return (aux);
    throw std::exception();
} 

#endif