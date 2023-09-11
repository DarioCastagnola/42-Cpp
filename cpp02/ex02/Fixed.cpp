/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:14:34 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/11 16:36:47 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fbits = 8;

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return(out);
}

Fixed::Fixed(void)
{
   // std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const int i)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_value = i << Fixed::_fbits;
}

Fixed::Fixed(const float f)
{
    //std::cout << "Float constructor called" << std::endl;
    float a = f * pow(2, Fixed::_fbits);
    int b = (int)round(a);
    this->_value = b;
}

Fixed::Fixed(Fixed const &f)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

int Fixed::toInt(void) const
{
    return(this->_value >> Fixed::_fbits);
}

float Fixed::toFloat(void) const
{
    return(this->_value / pow(2, Fixed::_fbits));
}

Fixed &Fixed::operator=(const Fixed &f)
{
    if (this == &f)
        return (*this);
    //std::cout << "Copy assignment operator called" << std::endl;
    this->_value = f.getRawBits();
    return(*this);
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

bool    Fixed::operator<(Fixed const &f)
{
    if (this->getRawBits() < f.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>(Fixed const &f)
{
    if (this->getRawBits() > f.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed const &f)
{
    if (this->getRawBits() >= f.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed const &f)
{
    if (this->getRawBits() <= f.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator==(Fixed const &f)
{
    if (this->getRawBits() == f.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator!=(Fixed const &f)
{
    if (this->getRawBits() != f.getRawBits())
        return true;
    return false;
}

Fixed    Fixed::operator+(Fixed const &f)
{
    Fixed sum;
    sum = this->getRawBits() + f.getRawBits();
    return sum;
}

Fixed    Fixed::operator-(Fixed const &f)
{
    Fixed sum;
    sum = this->getRawBits() - f.getRawBits();
    return sum;
}

Fixed    Fixed::operator*(Fixed const &f)
{
    Fixed sum;
    sum.setRawBits((int) ((long) this->getRawBits()) * ((long) f.getRawBits() >> Fixed::_fbits));    
    return sum;
}

Fixed    Fixed::operator/(Fixed const &f)
{
    Fixed sum;
    sum.setRawBits((int) ((long) this->getRawBits() << Fixed::_fbits) / (long) f.getRawBits());    
    return sum;
}

Fixed    Fixed::operator++(int)
{
    Fixed sum = *this;
    ++(*this);
    return sum;
}

Fixed    Fixed::operator--(int)
{
    Fixed sum = *this;
    --(*this);
    return sum;
}

Fixed &Fixed::operator++(void)
{
    ++this->_value;
    return *this;
}

Fixed &Fixed::operator--(void)
{
    --this->_value;
    return *this;
}
