/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:19:39 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/28 11:53:25 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv, std::string container) {
    if (container == "vectors")
		for (int i = 1; i < argc; i++)
			this->_myVector.push_back(std::atoi(argv[i]));
    return ;
}

PmergeMe::PmergeMe(const PmergeMe &obj) {
    *this = obj;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &obj) {
	if (this == &obj)
        return *this;
    return *this;
}

PmergeMe::~PmergeMe() {
	;
}

void PmergeMe::fordJohnson(std::vector<int>& arr, int pairsize) {
	int l = -1;
	static int recursion = 0;
	std::cout << "recursion " << recursion++ << std::endl;
    if (arr.size() % 2 != 0) {
        l = arr.back();
        arr.pop_back();
    }
    for (size_t i = 0; i < arr.size(); i += pairsize) {
        if (arr[i] > arr[i + pairsize / 2]) {
            std::swap(arr[i], arr[i + pairsize / 2]);
			for (int j = 1; j < pairsize / 2; j++)
				std::swap(arr[i + j], arr[i + (pairsize / 2) + j]);
        }
    }
    if (l != -1) {
        arr.push_back(l);
    }
	for (size_t i = 0; arr.size() > i; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
	if (arr.size() / pairsize != 1)
	{	
		fordJohnson(arr, pairsize * 2);
	}
}

void PmergeMe::execute() {
	fordJohnson(this->_myVector, 2);
}

