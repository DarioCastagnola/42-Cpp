/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:23:01 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/10 11:59:31 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char *file) {
    std::ifstream   data;
    std::string     line;
	data.open(file);
	if (!data)
	{
		std::cerr << RED << "Error: could not open file." << RESET << std::endl;
		return ;
	}
    while (getline(data, line))
    {
        this->_date = line.substr(0, 10);
        line.erase(0, 11);
        //std::cout << line << std::endl;
        this->_value = atof(line.c_str());
        std::cout << this->_date << " ---- " << std::fixed << std::setprecision(2) << this->_value << std::endl;
    }
    data.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) {
    *this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj) {
    if (this == &obj)
        return *this;
    this->_value = obj._value;
    this->_date = obj._date;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {
    ;
}
