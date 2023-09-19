/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:01:11 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/15 12:35:52 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed	a(4);
	Fixed	b(5.05f);
	Fixed	c(b);
	bool	cond;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << std::endl;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << b << " / " << a << " = " << b / a << std::endl;

	std::cout << std::endl;

	cond = c < b;
	std::cout << c << " < " << b << " = " << cond << std::endl;
	cond = c > b;
	std::cout << c << " > " << b << " = " << cond << std::endl;
	cond = a < b;
	std::cout << a << " < " << b << " = " << cond << std::endl;
	cond = c > a;
	std::cout << c << " > " << a << " = " << cond << std::endl;
	cond = c <= b;
	std::cout << c << " <= " << b << " = " << cond << std::endl;
	cond = c >= b;
	std::cout << c << " >= " << b << " = " << cond << std::endl;
	cond = c == b;
	std::cout << c << " == " << b << " = " << cond << std::endl;
	cond = c == a;
	std::cout << c << " == " << a << " = " << cond << std::endl;

	std::cout << std::endl;

	std::cout << a++ << " a++ " << a << std::endl;
	std::cout << b++ << " b++ " << b << std::endl;
	std::cout << a-- << " a-- " << a << std::endl;
	std::cout << b-- << " b-- " << b << std::endl;

	std::cout << std::endl;

	std::cout << ++a << " ++a " << a << std::endl;
	std::cout << ++b << " ++b " << b << std::endl;
	std::cout << --a << " --a " << a << std::endl;
	std::cout << --b << " --b " << b << std::endl;

	return 0;
}