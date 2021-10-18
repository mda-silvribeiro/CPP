/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:23:34 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:23:39 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

Point::~Point(void) {}

Point& Point::operator=(const Point& other) {
	_x = other._x;
	_y = other._y;

	return *this;
}

float Point::sign(Point p2, Point p3) {
	Fixed res;

	res = (this->_x - p3._x) * (p2._y - p3._y) - (p2._x - p3._x) * (this->_y - p3._y);

    return res.toFloat();
}
