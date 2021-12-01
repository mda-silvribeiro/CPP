/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:44:06 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/29 21:18:35 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) : N(0) {
    
}

Span::Span( unsigned int v ) : N(v), vec(0) {
    
}

Span::Span( const Span &src)
{
    *this = src;
}

Span &Span::operator=(const Span &cmp) {
    this->N = cmp.N;
    this->vec = cmp.vec;
    return (*this); 
}

Span::~Span(void ) {
    
}

void Span::addNumber(int n) {
    if (vec.size() >= N)
        throw BiggerThan5();
    else if ( vec.size() < N)
        vec.push_back(n);
}

void Span::addNumberPlus( void ) {
    if (vec.size() >= N)
        throw BiggerThan5();
    else if ((N - vec.size()) > 0)
    {
        for(unsigned int i = vec.size(); i < N; i++)
        {
            vec.push_back(rand() % (N * 10));
        }
    }   
}

int Span::shortestSpan( void ) {
    if (vec.begin() == vec.end())
        throw emptyVec();
    else
    {
        std::vector<int> vec1;
        std::copy(this->vec.begin(), this->vec.end(), std::back_inserter(vec1));
        std::sort(vec1.begin(), vec1.end());
        return (vec1.at(1) - vec1.at(0));
    }
}

int Span::longestSpan( void ) {
    if (vec.begin() == vec.end())
        throw emptyVec();
    else
    {
        std::vector<int> vec1;
        std::copy(this->vec.begin(), this->vec.end(), std::back_inserter(vec1));
        std::sort(vec1.begin(), vec1.end());
        return (*(vec1.end() - 1) - vec1.at(0));
    }
}

void Span::display( void ) {
    std::cout << "############# Vector #############" << std::endl;
    for (int i = 0; i < static_cast<int>(N); i++){
        std::cout << "[" << this->vec[i] << "] ";
        std::cout << std::endl;
    }
     std::cout << "############# End #############" << std::endl;
}