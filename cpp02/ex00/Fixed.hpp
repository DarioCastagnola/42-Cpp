/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:01:27 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/05 12:19:59 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
    Fixed(void);
    Fixed(Fixed &f);
    Fixed &operator=(const Fixed &f);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    
    private:
        int _value;
        static const int _fbits;
};

#endif