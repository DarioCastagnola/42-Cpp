/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:19:49 by dcastagn          #+#    #+#             */
/*   Updated: 2023/12/12 12:01:46 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <stdlib.h>
#include <ctime>
#include <iomanip> 
#ifndef COLORS
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define CYAN "\033[1;36m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define PURPLE "\033[1;35m"
# define WHITE "\033[1;37m"
# define GRAY "\033[1;30m"
# define RESET "\033[0m"
#endif

class PmergeMe
{
  public:
	PmergeMe(int argc, char **argv, std::string container);
	PmergeMe(const PmergeMe &obj);
	PmergeMe &operator=(const PmergeMe &obj);
	~PmergeMe();
	bool hasDuplicates(const std::deque<int>& numbers);
	bool hasDuplicates(const std::vector<int>& numbers);
	void execute(std::string container);
	void fordJohnson(std::vector<int>& arr, int pairsize);
	void fordJohnsonII(std::vector<int>& arr, int pairsize);
	void binaryInsert(std::vector<int>& arr, int n, int start, int end);
	int findIndex(std::vector<int>& arr, int n);
	void fordJohnson(std::deque<int>& arr, int pairsize);
	void fordJohnsonII(std::deque<int>& arr, int pairsize);
	void binaryInsert(std::deque<int>& arr, int n, int start, int end);
	int findIndex(std::deque<int>& arr, int n);
	class BadArguments: public std::exception
    {
      virtual const char* what() const throw()
		{
		return "BadArguments";
		}
	};
	std::deque<int> _myDeque;
	std::deque<int> _myRestDeque;
	std::vector<int> _myVector;
	std::vector<int> _myRest;
};
