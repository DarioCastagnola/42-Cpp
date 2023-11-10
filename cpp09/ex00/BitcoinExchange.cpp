/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:23:01 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/10 16:20:45 by dcastagn         ###   ########.fr       */
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
        std::cout << std::fixed << std::setprecision(2) << this->_myMap[this->_exdate] << std::endl;
    }
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

void    BitcoinExchange::exchange(char *file) {
    ;
}