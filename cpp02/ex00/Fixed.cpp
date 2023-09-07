/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:14:34 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/07 16:16:57 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fbits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(Fixed const &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    if (this == &f)
        return (*this);
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = f.getRawBits();
    return(*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}
