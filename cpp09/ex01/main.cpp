/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:35:23 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/16 15:34:45 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
    if (argc != 2)
	{
		std::cerr << RED << "Error" << RESET << std::endl;
		return 0;
	}
    RPN arma;
    arma.reversePolishNotation(argv[1]);
}