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

Point::Point(void) : _x(0), _y(0) {

}

Point::Point(const float a, const float b) : _x(a), _y(b) {

}

Point::Point(const Point& aux) : _x(aux._x), _y(aux._y) {

}

Point::~Point(void) {}

Point& Point::operator=(const Point& other) {
	_x = other._x;
	_y = other._y;

	return *this;
}

float Point::sign(Point b, Point c) {
	
	Fixed res;

	res = (this->_x - c._x) * (b._y - c._y) - (b._x - c._x) * (this->_y - c._y);
    return res.toFloat();
}
