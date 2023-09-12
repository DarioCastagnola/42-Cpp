/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:01:10 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/12 15:33:56 by dcastagn         ###   ########.fr       */
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
    
    private:
    const Fixed _x;
    const Fixed _y;
};

std::ostream &operator<<(std::ostream &out, const Fixed &x);

#endif