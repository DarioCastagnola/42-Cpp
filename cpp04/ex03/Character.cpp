/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/29 11:47:47 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

Character::Character(std::string name): _name(name) {
    std::cout << GREEN << "Character Constructor Called" << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(const Character &obj) {
    *this = obj;
}

Character &Character::operator=(const Character &obj) {
    if (this == &obj)
        return (*this);
    for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != 0)
			delete this->_inventory[i];
		this->_inventory[i] = obj._inventory[i];
    }
    this->_name = obj._name;
    return (*this);
}

Character::~Character(void) {
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    std::cout << RED << "Character Destructor Called" << RESET << std::endl;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx) {
    if (this->_inventory[idx])
        this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const {
    return this->_name;
}