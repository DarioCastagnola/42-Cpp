/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:48:35 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/21 15:43:43 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_hp = 100;
    this->_ep = 50;
    this->_ad = 20;
    std::cout << "Scav Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s): ClapTrap(s) {
    std::cout << "Scav Copy Constructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s) {
    if (this == &s)
        return (*this);
    this->_name = s.getName();
    this->_hp = s.getHP();
    this->_ep = s.getEP();
    this->_ad = s.getAD();
    return (*this);
}

ScavTrap::~ScavTrap(void) {
    std::cout << "Scav Destructor Called" << std::endl;
}
 
void ScavTrap::guardGate(void) {
    std::cout << this->getName() << " activates gatekeeper mode. HE SHALL NOT LET YOU PASS!" << std::endl;
}
