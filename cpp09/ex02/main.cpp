/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:58:24 by dcastagn          #+#    #+#             */
/*   Updated: 2023/12/12 12:01:27 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2)
    {
        std::cerr << RED << "Usage: " << argv[0] << " num1 num2 num3 ..." << RESET << std::endl;
        return 1;
    }

    try {
        clock_t t;
        float seconds;
        PmergeMe FordJohnsonDequeUser(argc, argv, "deque");
        t = clock();
        FordJohnsonDequeUser.execute("deque");
        t = clock() - t;
        seconds = (float)t / CLOCKS_PER_SEC;
        std::cout << "deque sorted in: " << std::setprecision(5) << seconds << " seconds" << std::endl;
        PmergeMe FordJohnsonVectorsUser(argc, argv, "vectors");
        t = clock();
        FordJohnsonVectorsUser.execute("vectors");
        t = clock() - t;
        seconds = (float)t / CLOCKS_PER_SEC;
        std::cout << "vector sorted in: " << std::setprecision(2) << seconds << " seconds" << std::endl;
    }
    catch (std::exception &e) { std::cout << RED << e.what() << RESET << std::endl; }
    return 1;
}