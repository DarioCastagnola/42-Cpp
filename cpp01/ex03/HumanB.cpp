/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:09 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/31 11:17:41 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
    this->_weapon = 0;
    return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
    return ;
}

void	HumanB::attack(void)
{
    if (this->_weapon == 0)
	    std::cout << this->_name << " throws a magnificent punch";
    else
    {
        std::cout << this->_name << " attacks with their ";
	    std::cout << this->_weapon->getType();
    }
	std::cout << std::endl;
	return ;
}