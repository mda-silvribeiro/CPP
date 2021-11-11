/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:24:05 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:24:16 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {

	Point a( -1.0f, 0.0f );
	Point b( 0.0f, 1.0f );
	Point c( 1.0f, 0.0f );

	Point x( 12.0f, -12.0f);

	if (bsp(a, b, c, x))
		std::cout << "x is inside the triangle defined by (a, b, c)." << std::endl;
	else
		std::cout << "x is not inside the triangle defined by (a, b, c)." << std::endl;

	Point y( 0.5f, 0.1f);

	if (bsp(a, b, c, y))
		std::cout << "y is inside the triangle defined by (a, b, c)." << std::endl;
	else
		std::cout << "y is not inside the triangle defined by (a, b, c)." << std::endl;

	Point z( 1.0f, -1.0f);

	if (bsp(a, b, c, z))
		std::cout << "z is inside the triangle defined by (a, b, c)." << std::endl;
	else
		std::cout << "z is not inside the triangle defined by (a, b, c)." << std::endl;
	return 0;

}