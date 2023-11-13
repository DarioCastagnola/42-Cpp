/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:16:46 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/13 14:28:25 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    try {
	int	n = 7;
	int	array[n];
	Span	arma(n);

	std::cout << WHITE << "array:" << RESET;
    srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 150;
		std::cout << " " << array[i];
	}
	std::cout << std::endl;
	arma.addLotsOfNumbers(array, array + n);
	arma.shortestSpan();
    std::cout << GREEN << "shortest span found is: " << RESET << arma.shortestSpan() << std::endl;
	std::cout << GREEN << "longest span found is: " << RESET << arma.longestSpan() << std::endl;
    }
    catch (std::exception &e) { std::cout << PURPLE << "exception caught" << RESET << std::endl; } 
    return 1;
}