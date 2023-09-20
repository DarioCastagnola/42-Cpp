/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:13:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 16:51:29 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name) {
    this->_name = ;
    this->_hp = FragTrap::getHP();
    this->_ep = ScavTrap::getEP();
    this->_ad = FragTrap::getAD();
    std::cout << "Diamond Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &s): ClapTrap(s), ScavTrap(s), FragTrap(s) {
    std::cout << "Diamond Copy Constructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &s) {
    if (this == &s)
        return (*this);
    return(*this);
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "Diamond Destructor Called" << std::endl;
}
 
void DiamondTrap::whoAmI(void) {
    std::cout << "My name is " << this->_name << ". You shall call my master " << ClapTrap::_name << std::endl;
}