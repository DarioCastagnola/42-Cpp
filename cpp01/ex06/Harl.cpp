/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:22:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/04 13:32:00 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money."
    << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}   

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
 years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "Command not found" << std::endl;
		return ;
	}
	void	(Harl::*p[4])() = {&Harl::warning, &Harl::debug, &Harl::error, &Harl::info};

	return  (this->*p[level[0] % 10 % 7])();  //magic numbers go brrrrrr (in all seriousness; 
                                              //This line takes the ascii value of the first letter(68, 87, 73, 69)
                                              //and this calculation makes it so that the index corresponds to the right function)
                                              // W D E I % 10
                                              // 7 8 9 3 % 7
                                              // 0 1 2 3
}

void Harl::filter(std::string level)
{
    std::string list[] = {"WARNING", "DEBUG", "ERROR", "INFO"};
    int i = -1;
    while (++i <= 3)
        if (list[i] == level)
            break;
    switch (i) 
    {
    case 0:
        complain(level);
        complain("ERROR");
        break;
    case 1:
        complain(level);
        complain("INFO");
        complain("WARNING");
        complain("ERROR");
        break;
    case 2:
        complain(level);
        break;
    case 3:
        complain(level);
        complain("WARNING");
        complain("ERROR");
        break;
    case 4:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;;
    }   
}