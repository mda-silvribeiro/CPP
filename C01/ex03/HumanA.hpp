/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:20:36 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:20:38 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

    public:
        void attack();
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
    private:
        std::string _name;
        Weapon& _weapon;
};

#endif
