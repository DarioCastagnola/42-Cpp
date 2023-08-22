/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:36:21 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/21 14:13:12 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip> 

int main()
{
    std::string command;
    PhoneBook phoneBook;
    
    while (true)
    {        
        std::cout << "Please enter a command: (ADD, SEARCH, EXIT)" << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            phoneBook.add();
        }
        if (command == "EXIT")
        {
            return 0;
        }
        if (command == "SEARCH")
        {
            phoneBook.search();
        }
    }
}