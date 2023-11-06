/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:16:46 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/06 16:24:49 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    try {
	int	n = 10;
	int	array[n];
	Span	arma(n);

	std::cout << "array:";
    srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % n;
		std::cout << " " << array[i];
	}
	std::cout << std::endl;

	arma.addLotsOfNumbers(array, array + n);
    std::cout << arma.shortestSpan() << std::endl;
    std::cout << arma.longestSpan() << std::endl;
    }
    catch (std::exception &e) { std::cout << PURPLE << "exception caught" << RESET << std::endl; } 
    return 1;
}