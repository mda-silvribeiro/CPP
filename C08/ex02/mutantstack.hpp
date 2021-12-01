/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:48:07 by mda-silv          #+#    #+#             */
/*   Updated: 2021/12/01 21:48:15 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template < typename T >
class MutantStack : public std::stack<T> {
public:
    MutantStack<T>( void ){ }
    MutantStack<T>(const MutantStack<T> &src) {
        *this = src;
    };

    MutantStack<T> &operator=(const MutantStack<T> &cmp)
    {
        (void)cmp;
        return (*this);
    };
    ~MutantStack<T>( void ){}

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator	begin( void );
	iterator	end( void );
};


#endif