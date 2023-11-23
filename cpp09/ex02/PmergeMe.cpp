/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:19:39 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/23 15:04:28 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv) {
    for (int i = 1; i < argc; i++)
	{
		this->_myVector.push_back(std::atoi(argv[i]));
	}
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

void PmergeMe::mergeInsertion(std::vector<int>& arr) {
	int l = -1;
	if (arr.size() % 2 != 0)
	{
		l = arr.back();
		arr.pop_back();
	}
    for (size_t i = 0; i < arr.size(); i += 2)
    {
        if(arr[i] > arr[i + 1])
        {
            std::swap(arr[i], arr[i + 1]);
        }
    }
	if (l != -1)
		arr.push_back(l);
}
