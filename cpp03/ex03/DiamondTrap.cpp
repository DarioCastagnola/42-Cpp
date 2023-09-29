/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:13:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/28 13:39:13 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name) {
    std::cout << GREEN << "Diamond Constructor Called" << RESET << std::endl;
    this->_name = ClapTrap::getName();
    this->_hp = FragTrap::getHP();
    this->_ep = ScavTrap::getEP();
    this->_ad = FragTrap::getAD();
}

DiamondTrap::DiamondTrap(const DiamondTrap &s): ClapTrap(s), ScavTrap(s), FragTrap(s) {
    std::cout << "Diamond Copy Constructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &s) {
    if (this == &s)
        return (*this);
    this->_name = s.getName();
    this->_hp = s.getHP();
    this->_ep = s.getEP();
    this->_ad = s.getAD();
    return (*this);
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << RED << "Diamond Destructor Called" << RESET << std::endl;
}
 
void DiamondTrap::whoAmI(void) {
    std::cout << "My name is " << this->_name << ". You shall call my master " << ClapTrap::_name + "_clap_name" << std::endl;
}   