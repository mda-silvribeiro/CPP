/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:23:55 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:23:58 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Point cpy = point;
    bool b1, b2, b3;
    b1 = cpy.sign(a, b) < 0.0f;
    b2 = cpy.sign(b, c) < 0.0f;
    b3 = cpy.sign(c, a) < 0.0f;

    return((b1 == b2) && (b2 == b3));
}
