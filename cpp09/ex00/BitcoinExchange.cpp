/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:23:01 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/13 16:45:16 by dcastagn         ###   ########.fr       */
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
        line.erase(0, 13);
		value = atof(line.c_str());
		std::cout << date << " => " << value << " = " << value * getExchangeRate(date) << std::endl;
    }
}
