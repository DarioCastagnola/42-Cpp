/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:58:24 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/28 11:20:22 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2)
    {
        std::cerr << RED << "Usage: " << argv[0] << " num1 num2 num3 ..." << RESET << std::endl;
        return 1;
    }
	PmergeMe FordJohnson(argc, argv, "vectors");
    FordJohnson.execute();
    // for (size_t i = 0; FordJohnson._myVector.size() > i; i++)
    //     std::cout << FordJohnson._myVector[i] << " ";
    // std::cout << std::endl;
    return 1;
}