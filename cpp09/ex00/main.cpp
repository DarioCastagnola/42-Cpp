/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:09:58 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/13 10:45:21 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2)
	{
		std::cerr << RED << "Error: could not open file." << RESET << std::endl;
		return 0;
	}
	BitcoinExchange	scamcoin("data.csv");
	scamcoin.exchange(argv[1]);
	return 1;
}