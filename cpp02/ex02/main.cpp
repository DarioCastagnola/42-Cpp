/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:01:11 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/14 12:36:48 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b(Fixed(4) / Fixed(0.3f));
    Fixed const c(Fixed(5.05f) * Fixed(2));
    Fixed const d(0.3f);
    Fixed const e(-0.5f);

    std::cout << "divided = " << (d / e) << std::endl;
    std::cout << "product = " << (d * e) << std::endl;
    std::cout << "sum = " << (d + e) << std::endl;
    std::cout << "neg = " << (d - e) << std::endl;
    std::cout << "a = "  << a << std::endl;
    std::cout << "++a = "  << ++a << std::endl;
    std::cout << "a = "  << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = "  << a << std::endl;
    std::cout << "b = "  << b << std::endl;
    std::cout << "--a = "  << --a << std::endl;
    std::cout << "a = "  << a << std::endl;
    std::cout << "a-- = "  << a-- << std::endl;
    std::cout << "a = "  << a << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "max a, b = " << Fixed::max(a, b) << std::endl;
    std::cout << "min a, c = " << Fixed::min(a, c) << std::endl;
    return 0;
}