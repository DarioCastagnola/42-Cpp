/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:52:13 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/04 10:50:49 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void	(Harl::*fp) (void);

void Harl::debug(void)
{
    std::cout << "debug" << std::endl;
}

void Harl::info(void)
{
    std::cout << "info" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "warning" << std::endl;
}

void Harl::error(void)
{
    std::cout << "error" << std::endl;
}

void Harl::complain(std::string level)
{
    int	id;

	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
	{
		std::cout << "Command not found" << std::endl;
		return ;
	}
    fp  function[4];
    function[0] = &Harl::warning;
    function[1] = &Harl::debug;
    function[2] = &Harl::error;
    function[3] = &Harl::info;
    id = level[0] % 10 % 7;   //magic numbers go brrrrrr (in all seriousness; 
                              //This line takes the ascii value of the first letter(68, 87, 73, 69)
                              //and this calculation makes it so that id corresponds to the right function)
                              // W D E I % 10
                              // 7 8 9 3 % 7
                              // 0 1 2 3
    return (this->*function[id])();
}
