/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:47:51 by mda-silv          #+#    #+#             */
/*   Updated: 2021/12/01 21:47:56 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void){
    return (this->c.begin());

}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end(void){
    return (this->c.end());

}

template class MutantStack<int>;