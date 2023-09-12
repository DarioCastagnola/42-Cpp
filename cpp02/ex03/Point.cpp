/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:01:14 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/12 15:35:47 by dcastagn         ###   ########.fr       */
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

