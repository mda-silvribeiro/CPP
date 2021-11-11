/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:29:34 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:29:37 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    std::cout << "AMateria constructor called" << std::endl;
    this->_t = type;
};

std::string const &AMateria::getType() const {
    return (this->_t);
};
