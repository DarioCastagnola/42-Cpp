/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:01:27 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/07 15:27:59 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
    Fixed(void);
    Fixed(Fixed const &f);
    Fixed(const int);
    Fixed(const float);
    Fixed &operator=(Fixed const &f);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt( void ) const;
    
    private:
        int _value;
        static const int _fbits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &x);

#endif