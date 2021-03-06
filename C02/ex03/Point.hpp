/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:23:45 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:23:50 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>
# include <cmath>

class Point {

	public:

		Point(void);
		Point(const float a, const float b);
		Point(const Point& other);
		~Point(void);

		Point& operator=(const Point& aux);
		float sign(Point b, Point c);

	private:

		Fixed _x;
		Fixed _y;
};

#endif
