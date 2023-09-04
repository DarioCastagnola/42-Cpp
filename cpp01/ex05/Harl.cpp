/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:52:13 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/04 11:12:50 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "debug" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money."
    << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}   

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
 years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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

    
// void	Harl::complain(std::string level){
//     void	(Harl::*p[4])() = {&Harl::warning, &Harl::debug, &Harl::error, &Harl::info};
//     (this->*p[level[0] % 10 % 7])();
// }   Se vuoi flexare usi questa funzione. Clean code am I right?
