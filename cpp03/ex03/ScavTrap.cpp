/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:48:35 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 10:17:08 by dcastagn         ###   ########.fr       */
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

void ScavTrap::attack(const std::string& target){
        if (this->_hp <= 0) {
        std::cout << this->_name << " received lethal damage, he can no longer fight!" << std::endl;
        return ;
    }
    if (this->_ep == 0) {
        std::cout << this->_name << " has no energy left, therefore he cannot perform this action!" << std::endl;
        return ;
    }
    this->_ep -= 1;
    if (this->_ad <= 0) {
        std::cout << this->_name << " throws the best punch he could muster but misses the target!" << std::endl;
        return ;
    }
    std::cout << this->_name << " uses SURPRISE ATTACK and hits " << target << " , causing " << this->_ad << " points of damage!, Ouch that looks like it hurts!" << std::endl;
}