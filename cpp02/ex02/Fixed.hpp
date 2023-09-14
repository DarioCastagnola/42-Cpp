/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:01:27 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/14 12:40:30 by dcastagn         ###   ########.fr       */
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
    bool operator == (Fixed const &f) const;
    bool operator != (Fixed const &f) const;
    bool operator >= (Fixed const &f) const;
    bool operator > (Fixed const &f) const;
    bool operator <= (Fixed const &f) const;
    bool operator < (Fixed const &f) const;
    Fixed &operator=(Fixed const &f);
    Fixed operator + (Fixed const &f) const;
    Fixed operator - (Fixed const &f) const;
    Fixed operator * (Fixed const &f) const;
    Fixed operator / (Fixed const &f) const;
    Fixed operator ++ (int);
    Fixed operator -- (int);
    Fixed &operator ++ (void);
    Fixed &operator -- (void);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt( void ) const;
    static Fixed &min(Fixed &a, Fixed&b);
    static Fixed &max(Fixed &a, Fixed&b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    
    private:
        int _value;
        static const int _fbits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &x);

#endif