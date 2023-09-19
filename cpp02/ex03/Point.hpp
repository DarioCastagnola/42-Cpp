/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:01:10 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/15 16:03:15 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
    public:
    Point(void);
    Point(const float a, const float b);
    Point(const Point &p);
    Point &operator=(Point const &f);
    ~Point(void);
    Fixed getX(void) const;
    Fixed getY(void) const;
    void setM(Fixed m);
    void setQ(Fixed q); 
    Fixed getM(void) const;
    void angularCoefficient(Point &p);
    void inter(void);
    
    private:
    const Fixed _x;
    const Fixed _y;
    Fixed _m;
    Fixed _q;
};

std::ostream &operator<<(std::ostream &out, const Fixed &x);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif