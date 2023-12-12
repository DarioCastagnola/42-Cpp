/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:19:39 by dcastagn          #+#    #+#             */
/*   Updated: 2023/12/12 12:01:01 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool PmergeMe::hasDuplicates(const std::vector<int>& numbers) {
    // Use nested loops to compare each pair of elements
    for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
        for (std::vector<int>::size_type j = i + 1; j < numbers.size(); ++j) {
            if (numbers[i] == numbers[j]) {
                return true;  // Duplicate found
            }
        }
    }
    return false;
}

bool PmergeMe::hasDuplicates(const std::deque<int>& numbers) {
    for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
        for (std::vector<int>::size_type j = i + 1; j < numbers.size(); ++j) {
            if (numbers[i] == numbers[j]) {
                return true;  // Duplicate found
            }
        }
    }
    return false;
}

PmergeMe::PmergeMe(int argc, char **argv, std::string container) {
    for (int i = 1; i < argc; i++)
    {
        for (size_t j = 0; argv[i][j] != 0; j++)
        {
            if (!isdigit(argv[i][j]))
                throw BadArguments();
        }
        if (container == "vectors")
        {
            this->_myVector.push_back(std::atoi(argv[i]));
            if (hasDuplicates(this->_myVector))
                throw BadArguments();
        }
        else if (container == "deque")
        {
            this->_myDeque.push_back(std::atoi(argv[i]));
            if (hasDuplicates(this->_myDeque))
                throw BadArguments();
        }
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

size_t jacobsthal[] = {
    1u, 3u, 5u, 11u, 21u, 43u, 85u, 171u, 341u, 683u, 1365u,
    2731u, 5461u, 10923u, 21845u, 43691u, 87381u, 174763u, 349525u, 699051u,
    1398101u, 2796203u, 5592405u, 11184811u, 22369621u, 44739243u, 89478485u,
    178956971u, 357913941u, 715827883u, 1431655765u,
    2863311531u, 5726623061u, 11453246123u
};

int PmergeMe::findIndex(std::vector<int>& arr, int n) {
    for (int i = 0; i < (int)arr.size(); i++)
    {
        if (arr[i] == n)
            return i;
    }
    return -1;
}

int PmergeMe::findIndex(std::deque<int>& arr, int n) {
    for (int i = 0; i < (int)arr.size(); i++)
    {
        if (arr[i] == n)
            return i;
    }
    return -1;
}

void PmergeMe::binaryInsert(std::deque<int>& arr, int n, int start, int end) {
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
    else
        arr.insert((arr.begin() + start), n);
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
    else
        arr.insert((arr.begin() + start), n);
}

void PmergeMe::fordJohnsonII(std::deque<int>& arr, int pairsize) {
    std::deque<int> help;
    std::deque<int> heads;
	size_t jac;
    size_t lastidx;
    bool    check;

    if (pairsize == 1 || heads.size() >= arr.size())
    {
        if (this->_myRestDeque.size() == 1)
            binaryInsert(arr, this->_myRestDeque[0], 0, arr.size());
        return ;
    }
	heads.push_back(arr[pairsize / 2]);
	heads.push_back(arr[0]);
    if ((size_t)pairsize == arr.size())
    {
        int pend;
        for (size_t i = 0; i < heads.size(); i++)
        {
            pend = findIndex(arr, heads[i]);
            for (size_t j = pend; j - pend < (size_t)pairsize / 2; j++)
                help.push_back(arr[j]);
        }
        arr = help;
        fordJohnsonII(arr, pairsize / 2);
        return ;
    }
    lastidx = 1;
    check = true;
	for (size_t i = 1; i < sizeof(jacobsthal) / sizeof(size_t); i++)
	{
		jac = jacobsthal[i];
        for (size_t j = lastidx + 1; j < jac + 1; j++)
        {
            if (j > arr.size() / pairsize)
                break ;
            heads.push_back(arr[pairsize * (j - 1)]);
        }
        while (jac > lastidx)
        {
            if (jac > arr.size() / pairsize)
            {
                jac--;
                check = false;
                continue ;
            }
	    	binaryInsert(heads, arr[pairsize * jac - pairsize / 2], 0, heads.size());
            jac--;
        }
        if (!check)
            break ;
        lastidx = jacobsthal[i];
	}
    int pend;
    if (this->_myRestDeque.size() >= (size_t)(pairsize))
    {
        binaryInsert(heads, this->_myRestDeque[0], 0, heads.size() - 1);
        if (pairsize > 1)
            binaryInsert(heads, this->_myRestDeque[pairsize / 2], 0, heads.size() - 1);
    }
    for (size_t i = 0; i < heads.size(); i++)
    {
        pend = findIndex(arr, heads[i]);
        if (pend >= 0)
            for (size_t j = pend; j - pend < (size_t)pairsize / 2; j++)
                help.push_back(arr[j]);
        else
        {
            pend = findIndex(this->_myRestDeque, heads[i]);
            for (int i = pend; i < pend + pairsize / 2; i++)
                help.push_back(this->_myRestDeque[i]);
            this->_myRestDeque.erase(this->_myRestDeque.begin() + pend, this->_myRestDeque.begin() + pend + pairsize / 2);
        }
    }
    arr = help;
    fordJohnsonII(arr, pairsize / 2);
}

void PmergeMe::fordJohnsonII(std::vector<int>& arr, int pairsize) {
    std::vector<int> help;
    std::vector<int> heads;
	size_t jac;
    size_t lastidx;
    bool    check;

    if (pairsize == 1 || heads.size() >= arr.size())
    {
        if (this->_myRest.size() == 1)
            binaryInsert(arr, this->_myRest[0], 0, arr.size());
        return ;
    }
	heads.push_back(arr[pairsize / 2]);
	heads.push_back(arr[0]);
    if ((size_t)pairsize == arr.size())
    {
        int pend;
        for (size_t i = 0; i < heads.size(); i++)
        {
            pend = findIndex(arr, heads[i]);
            for (size_t j = pend; j - pend < (size_t)pairsize / 2; j++)
                help.push_back(arr[j]);
        }
        arr = help;
        fordJohnsonII(arr, pairsize / 2);
        return ;
    }
    lastidx = 1;
    check = true;
	for (size_t i = 1; i < sizeof(jacobsthal) / sizeof(size_t); i++)
	{
		jac = jacobsthal[i];
        for (size_t j = lastidx + 1; j < jac + 1; j++)
        {
            if (j > arr.size() / pairsize)
                break ;
            heads.push_back(arr[pairsize * (j - 1)]);
        }
        while (jac > lastidx)
        {
            if (jac > arr.size() / pairsize)
            {
                jac--;
                check = false;
                continue ;
            }
	    	binaryInsert(heads, arr[pairsize * jac - pairsize / 2], 0, heads.size());
            jac--;
        }
        if (!check)
            break ;
        lastidx = jacobsthal[i];
	}
    int pend;
    if (this->_myRest.size() >= (size_t)(pairsize))
    {
        binaryInsert(heads, this->_myRest[0], 0, heads.size() - 1);
        if (pairsize > 1)
            binaryInsert(heads, this->_myRest[pairsize / 2], 0, heads.size() - 1);
    }
    for (size_t i = 0; i < heads.size(); i++)
    {
        pend = findIndex(arr, heads[i]);
        if (pend >= 0)
            for (size_t j = pend; j - pend < (size_t)pairsize / 2; j++)
                help.push_back(arr[j]);
        else
        {
            pend = findIndex(this->_myRest, heads[i]);
            for (int i = pend; i < pend + pairsize / 2; i++)
                help.push_back(this->_myRest[i]);
            this->_myRest.erase(this->_myRest.begin() + pend, this->_myRest.begin() + pend + pairsize / 2);
        }
    }
    arr = help;
    fordJohnsonII(arr, pairsize / 2);
}

void PmergeMe::fordJohnson(std::deque<int>& arr, int pairsize) {
	// static int recursion = 0;
	// std::cout << "recursion " << recursion++ << std::endl;
    if (arr.size() % pairsize != 0)
    {
        for (size_t i = arr.size(); arr.size() % pairsize != 0; i--)
        {
            this->_myRestDeque.push_back(arr[i - 1]);
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
    // std::cout << "main chain: ";
	// for (size_t i = 0; arr.size() > i; i++)
    //     std::cout << arr[i] << " ";
    // std::cout << std::endl;
    // std::cout << "rest: ";
    // for (size_t i = 0; this->_myRest.size() > i; i++)
    // {
    //     std::cout << this->_myRest[i] << " ";
    // }
    // std::cout << std::endl;
    // std::cout << "------------------------------------------------" << std::endl;
	if (arr.size() / pairsize != 1)
		fordJohnson(arr, pairsize * 2);
}

void PmergeMe::fordJohnson(std::vector<int>& arr, int pairsize) {
	// static int recursion = 0;
	// std::cout << "recursion " << recursion++ << std::endl;
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
    // std::cout << "main chain: ";
	// for (size_t i = 0; arr.size() > i; i++)
    //     std::cout << arr[i] << " ";
    // std::cout << std::endl;
    // std::cout << "rest: ";
    // for (size_t i = 0; this->_myRest.size() > i; i++)
    // {
    //     std::cout << this->_myRest[i] << " ";
    // }
    // std::cout << std::endl;
    // std::cout << "------------------------------------------------" << std::endl;
	if (arr.size() / pairsize != 1)
		fordJohnson(arr, pairsize * 2);
}

void PmergeMe::execute(std::string container) {
    if (container == "vectors")
    {
        std::cout << RED << "unsorted vector = ";
        for (size_t i = 0; this->_myVector.size() > i; i++)
        {
            std::cout << this->_myVector[i];
            if (i + 1 < this->_myVector.size())
                std::cout << "-";
        }
        std::cout << RESET << std::endl;
        fordJohnson(this->_myVector, 2);
        std::reverse(this->_myRest.begin(),this->_myRest.end());
        fordJohnsonII(this->_myVector, this->_myVector.size());
        std::cout << GREEN << "sorted vector = ";
        for (size_t i = 0; this->_myVector.size() > i; i++)
        {
            std::cout << this->_myVector[i];
            if (i + 1 < this->_myVector.size())
                std::cout << "-";
        }
        std::cout << RESET << std::endl;
    }
    else if (container == "deque")
    {
        std::cout << RED << "unsorted deque = ";
        for (size_t i = 0; this->_myDeque.size() > i; i++)
        {
            std::cout << this->_myDeque[i];
            if (i + 1 < this->_myDeque.size())
                std::cout << "-";
        }
        std::cout << RESET << std::endl;
        fordJohnson(this->_myDeque, 2);
        std::reverse(this->_myRestDeque.begin(),this->_myRestDeque.end());
        fordJohnsonII(this->_myDeque, this->_myDeque.size());
        std::cout << GREEN << "sorted deque = ";
        for (size_t i = 0; this->_myDeque.size() > i; i++)
        {
            std::cout << this->_myDeque[i];
            if (i + 1 < this->_myDeque.size())
                std::cout << "-";
        }
        std::cout << RESET << std::endl; 
    }
}
