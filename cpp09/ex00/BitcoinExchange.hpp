/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:23:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/15 10:45:33 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <list>
#include <stack>
#include <deque>
#include <set>
#include <fstream>
#include <map>
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

class BitcoinExchange
{
  public:
	BitcoinExchange(std::string database);
	BitcoinExchange(const BitcoinExchange &obj);
	BitcoinExchange &operator=(const BitcoinExchange &obj);
	~BitcoinExchange();
	void exchange(char *file);
	int isValidDate(std::string date);
	int isValidDateFormat(std::string date);
	int isValidLine(std::string line);
	double getExchangeRate(std::string date);
	std::string _exdate;
	std::map<std::string, double> _myMap;
};