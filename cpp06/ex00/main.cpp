/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:11:40 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/23 16:35:42 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	ScalarConverter	boh;

	if (ac != 2)
	{
		std::cerr << RED
		<< "Error\nWrong arguments"
		<< RESET << std::endl;
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		boh.convert(av[i]);
	}
	return (0);
}