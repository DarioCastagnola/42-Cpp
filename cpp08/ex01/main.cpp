/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:16:46 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/07 12:47:29 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    try {
	int	n = 6;
	int	array[n];
	Span	arma(n);

	std::cout << "array:";
    srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 1500;
		std::cout << " " << array[i];
	}
	// array[1] = 2147483646;
	// array[0] = -2147483647;
	std::cout << std::endl;

	arma.addLotsOfNumbers(array, array + n);
    std::cout << GREEN << "shortest span found is: " << RESET << arma.shortestSpan() << std::endl;
	std::cout << GREEN << "longest span found is: " << RESET << arma.longestSpan() << std::endl;
    }
    catch (std::exception &e) { std::cout << PURPLE << "exception caught" << RESET << std::endl; } 
    return 1;
}