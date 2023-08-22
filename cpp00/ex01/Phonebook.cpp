/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:45:28 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/22 11:23:17 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstring>
#include <iomanip>
#include <string>
#include <stdlib.h>

std::string printSearch(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(10);
        str[9] = '.';
    }
    return (str);
}

PhoneBook::PhoneBook()
{
    this->index = -1;
}

void    PhoneBook::add()
{
    int i = 0;
    std::string line;

    this->index++;
    i = index % 8;
    std::cout << "Insert first name: " << std::endl;
    std::getline(std::cin, line);
    while (line == "")
        std::getline(std::cin, line);
    this->user[i].setFname(line);
    std::cout << "Insert last name: " << std::endl;
    std::getline(std::cin, line);
    while (line == "")
        std::getline(std::cin, line);
    this->user[i].setLname(line);
    std::cout << "Insert nickname: " << std::endl;
    std::getline(std::cin, line);
    while (line == "")
        std::getline(std::cin, line);
    this->user[i].setNname(line);
    std::cout << "Insert phone number: " << std::endl;
    std::getline(std::cin, line);
    while (line == "")
        std::getline(std::cin, line);
    this->user[i].setPnum(line);
    std::cout << "Insert your darkest secret: " << std::endl;
    std::getline(std::cin, line);
    while (line == "")
        std::getline(std::cin, line);
    this->user[i].setDs(line);
}

void    PhoneBook::search()
{
    std::string  query;
    int i = 0;
    
    for (int i = 0; i < 8 && this->user[i].getFname() != ""; i++)
    {
        std::cout << "---------------------------------------------" << std::endl;
        std::cout << "|" << std::setw(10) << i + 1;
        std::cout << "|" << std::setw(10) << printSearch(this->user[i].getFname());
        std::cout << "|" << std::setw(10) << printSearch(this->user[i].getLname());
        std::cout << "|" << std::setw(10) << printSearch(this->user[i].getNname()) << "|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
    }
    std::cout << "Which entry are you most interested in?" << std::endl;
    std::getline(std::cin, query);
    i = std::atoi(query.c_str());
    if (i < 1 || this->user[i - 1].getFname() == "" || i > 8)
    {
        std::cout << "Invalid Search query" << std::endl;
        return ;
    }
    std::cout << this->user[i - 1].getFname() << std::endl;
    std::cout << this->user[i - 1].getLname() << std::endl;
    std::cout << this->user[i - 1].getNname() << std::endl;
    std::cout << this->user[i - 1].getPnum() << std::endl;
    std::cout << this->user[i - 1].getDs() << std::endl;
}
