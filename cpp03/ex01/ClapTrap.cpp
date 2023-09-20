/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:21 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 14:55:49 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hp(100), _ep(50), _ad(20) {
    std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &c): _name(c._name), _hp(c._hp), _ep(c._ep), _ad(c._ad) {
    std::cout << "Copy Constructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c) {
    if (this == &c)
        return (*this);
    return(*this);
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor Called" << std::endl;
}

std::string ClapTrap::getName(void) {
    return _name;
}

int ClapTrap::getAD(void) {
    return _ad;
}

int ClapTrap::getEP(void) {
    return _ep;
}

int ClapTrap::getHP(void) {
    return _hp;
}

void ClapTrap::setAD(int amount) {
    this->_ad = amount;
}

void ClapTrap::attack(const std::string &target) {
    if (this->_hp <= 0) {
        std::cout << this->_name << " recieved lethal damage, he can no longer fight!" << std::endl;
        return ;
    }
    if (this->_ep == 0) {
        std::cout << this->_name << " has no energy left, therefore he cannot perform this action!" << std::endl;
        return ;
    }
    this->_ep -= 1;
    std::cout << this->_name << " karate-chops " << target << " , causing " << this->_ad << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hp -= amount;
    if (this->_hp <= 0) {
        std::cout << this->_name << " recieved lethal damage, he can no longer fight!" << std::endl;
        return ;
    }
    std::cout << this->_name << " took a big hit! He's left with " << this->_hp << " after recieving " << amount << " point of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hp <= 0) {
        std::cout << this->_name << " recieved lethal damage, he can no longer fight!" << std::endl;
        return ;
    }
    if (this->_ep == 0) {
        std::cout << this->_name << " has no energy left, therefore he cannot perform this action!" << std::endl;
        return ;
    }
    this->_hp += amount;
    this->_ep -= 1;
    std::cout << this->_name << " has repaired himself and he is now at " << this->_hp << " hp!" << std::endl;
}