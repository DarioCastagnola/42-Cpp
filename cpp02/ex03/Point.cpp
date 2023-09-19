/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:01:14 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/15 16:03:36 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(Fixed(0)), _y(Fixed(0)) {;}

Point::Point(const float a, const float b): _x(Fixed(a)), _y(Fixed(b)) {;}

Point::Point(const Point &p): _x(p._x), _y(p._y) {;}

Point &Point::operator=(const Point &p) {
    if (this == &p)
        return (*this);
    return(*this);
}

Point::~Point(void) {;}

Fixed   Point::getX(void) const {
    return (this->_x);
}

Fixed   Point::getY(void) const {
    return (this->_y);
}

void    Point::setM(Fixed m) {
	this->_m = m;
	return ;
}

Fixed   Point::getM(void) const {
    return (this->_m);
}

void    Point::setQ(Fixed q) {
    this->_q = q;
}

void    Point::inter(void) {
	Fixed	inter, x, y;

	x = this->getX();
	y = this->getY();
	inter = (y - (this->getM() * x));
	this->setQ(inter);
	return ;
}

void Point::angularCoefficient(Point &p) {
	Fixed	m, x1, x2, y1, y2;

	x1 = this->getX();
	x2 = p.getX();
	y1 = this->getY();
	y2 = p.getY();
    m = ((y2 - y1) / (x2 - x1));
    this->setM(m);
	return ;
}