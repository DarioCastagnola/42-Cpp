/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:23:01 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/14 16:39:59 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

 
//<< std::fixed << std::setprecision(2)

BitcoinExchange::BitcoinExchange(std::string database) {
    std::ifstream   input;
    std::string     line;
    input.open(database.c_str());
    if (!input.is_open())
    {
        std::cerr << "Error: Could not open file." << std::endl;
        return ;
    }
    while (getline(input, line))
    {
        this->_exdate = line.substr(0, 10);
        line.erase(0, 11);
        this->_myMap[this->_exdate] = atof(line.c_str());
    }
	input.close();
	return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) {
    *this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj) {
    if (this == &obj)
        return *this;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {
    ;
}

double BitcoinExchange::getExchangeRate(std::string date) {
	try
	{ 
		return (this->_myMap.at(date));
	}
	catch(std::exception &e)
	{
		std::map<std::string, double>::iterator it = this->_myMap.lower_bound(date);

        if (it != this->_myMap.begin())
		{
			--it;
			return it->second;
		}
		return (this->_myMap.lower_bound(date)->second);
	}
}

int BitcoinExchange::isValidDateFormat(std::string date) {
	if (date.size() != 10)
		return 0;
	return 1;
}

int BitcoinExchange::isValidDate(std::string date) {
	int year;
	int month;
	int day;
	if (!isValidDateFormat(date))
		return 0;
	year = atoi(date.substr(0,4).c_str());
	if (year < 2009 || year > 2023)
		return 0;
	month = atoi(date.substr(5,7).c_str());
	if (month < 1 || month > 12)
		return 0;
	day = atoi(date.substr(8,10).c_str());
	if (month == 2)
		if (day >= 28)
			return 0;
	if (month == 4 || month == 6 || month == 9 || month == 11)
		if (day >= 30)
			return 0;
	if (day >= 31)
		return 0;
	return 1;
}

void    BitcoinExchange::exchange(char *file) {
    std::ifstream input;
	std::string line;
	std::string date;
	float value;
	input.open(file);
	if (!input.is_open())
	{
        std::cerr << "Error: Could not open file." << std::endl;
        return ;
    }
	getline(input, line);
    while (getline(input, line))
    {
        date = line.substr(0, 10);
		if (!isValidDate(date))
			std::cerr << RED << "Error: bad input => " << date << RESET << std::endl;
        line.erase(0, 13);
		value = atof(line.c_str());
		if (value < 0)
			std::cerr << RED << "Error: not a positive number." << RESET << std::endl;
		if (value >= 1000)
			std::cerr << RED << "Error: too large a number." << RESET << std::endl;
		if (isValidDate(date) && (value >= 0 && value <= 1000))
			std::cout << date << " => " << value << " = " << value * getExchangeRate(date) << std::endl;
    }
}
