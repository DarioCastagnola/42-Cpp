/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:21 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 12:19:58 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(std::string name): _name(name), _hp(10), _ep(10), _ad(0) {;}

Claptrap::Claptrap(Claptrap const &c): _name(c._name), _hp(c._hp), _ep(c._ep), _ad(c._ad) {;}

Claptrap &Claptrap::operator=(const Claptrap &c) {
    if (this == &c)
        return (*this);
    return(*this);
}

Claptrap::~Claptrap(void) {;}

std::string Claptrap::getName(void) {
    return _name;
}

int Claptrap::getAD(void) {
    return _ad;
}

int Claptrap::getEP(void) {
    return _ep;
}

int Claptrap::getHP(void) {
    return _hp;
}

void Claptrap::setAD(int amount) {
    this->_ad = amount;
}

void Claptrap::attack(const std::string &target) {
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

void Claptrap::takeDamage(unsigned int amount) {
    this->_hp -= amount;
    if (this->_hp <= 0) {
        std::cout << this->_name << " recieved lethal damage, he can no longer fight!" << std::endl;
        return ;
    }
    std::cout << this->_name << " took a big hit! He's left with " << this->_hp << " after recieving " << amount << " point of damage!" << std::endl;
}

void Claptrap::beRepaired(unsigned int amount) {
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