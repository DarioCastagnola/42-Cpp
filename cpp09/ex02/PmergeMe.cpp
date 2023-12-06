/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:19:39 by dcastagn          #+#    #+#             */
/*   Updated: 2023/12/06 16:51:16 by dcastagn         ###   ########.fr       */
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

size_t jacobsthal[] = {
    1u, 3u, 5u, 11u, 21u, 43u, 85u, 171u, 341u, 683u, 1365u,
    2731u, 5461u, 10923u, 21845u, 43691u, 87381u, 174763u, 349525u, 699051u,
    1398101u, 2796203u, 5592405u, 11184811u, 22369621u, 44739243u, 89478485u,
    178956971u, 357913941u, 715827883u, 1431655765u,
    2863311531u, 5726623061u, 11453246123u
};

size_t PmergeMe::findIndex(std::vector<int>& arr, int n) {
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n)
            return i;
    }
    return 0;
}

void PmergeMe::binaryInsert(std::vector<int>& arr, int n, int start, int end) {
    int mid;
    while (start < end)
    {
        mid = (start + end) / 2;
        
        if (n > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (arr[start] < n && arr[end] > n)
        arr.insert((arr.begin() + start), n);
    else if (start == end && arr[start] > n)
        arr.insert((arr.begin() + start), n);
    else if (start == end && arr[start] < n)
        arr.insert((arr.begin() + start + 1), n);
}

void PmergeMe::fordJohnsonII(std::vector<int>& arr, int pairsize) {
    std::cout << "pairsize = " << pairsize << std::endl;
    std::vector<int> help;
    std::vector<int> heads;
	size_t jac;
    size_t lastidx;

	heads.push_back(arr[pairsize / 2]);
	heads.push_back(arr[0]);
    lastidx = 1;
	for (size_t i = 1; i < sizeof(jacobsthal) / sizeof(size_t); i++)
	{
		jac = jacobsthal[i];
        std::cout << RED << "SUCA" << RESET << std::endl;
        for (size_t j = lastidx + 1; j < jac; j++)
            heads.push_back(arr[pairsize * (j - 1)]);
        std::cout << CYAN << "SUCA" << RESET << std::endl;
        while (jac > lastidx)
        {
            if (jac > arr.size() / pairsize)
            {
                jac--;
                continue ;
            }
	    	binaryInsert(heads, arr[pairsize * jac - pairsize / 2], arr[lastidx], arr[0]);
            jac--;
        }
        lastidx = jacobsthal[i];
	}
    if (pairsize == 1)
        return ;
    int pend;
    for (size_t i = 0; i < heads.size(); i++)
    {
        pend = findIndex(arr, heads[i]);
        for (size_t j = pend; j - pend < (size_t)pairsize / 2; j++)
            help.push_back(arr[j]);
    }
    arr = help;
    fordJohnsonII(arr, pairsize / 2);
}

void PmergeMe::fordJohnson(std::vector<int>& arr, int pairsize) {
	static int recursion = 0;
	std::cout << "recursion " << recursion++ << std::endl;
    if (arr.size() % pairsize != 0)
    {
        for (size_t i = arr.size(); arr.size() % pairsize != 0; i--)
        {
            this->_myRest.push_back(arr[i - 1]); 
            arr.pop_back();
        }
    }
    for (size_t i = 0; i < arr.size(); i += pairsize)
    {
        if (arr[i] < arr[i + pairsize / 2]) {
            std::swap(arr[i], arr[i + pairsize / 2]);
			for (int j = 1; j < pairsize / 2; j++)
				std::swap(arr[i + j], arr[i + (pairsize / 2) + j]);
        }
    }
	for (size_t i = 0; arr.size() > i; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    std::cout << "rest: ";
    for (size_t i = 0; this->_myRest.size() > i; i++)
    {
        std::cout << this->_myRest[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
	if (arr.size() / pairsize != 1)
		fordJohnson(arr, pairsize * 2);
}

void PmergeMe::execute() {
	fordJohnson(this->_myVector, 2);
    fordJohnsonII(this->_myVector, this->_myVector.size());
}

