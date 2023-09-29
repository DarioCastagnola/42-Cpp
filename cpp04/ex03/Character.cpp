/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/29 16:03:50 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

Character::Character(std::string name): _name(name) {
    std::cout << GREEN << "Character Constructor Called" << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 20; i++)
        this->_floor[i] = NULL;
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
		this->_inventory[i] = obj._inventory[i]->clone();
    }
    for (int i = 0; i < 20; i++)
	{
		if (this->_floor[i] != 0)
			delete this->_floor[i];
		this->_floor[i] = obj._floor[i]->clone();
    }
    this->_name = obj._name;
    return (*this);
}

Character::~Character(void) {
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    for (int i = 0; i < 20; i++)
        delete this->_floor[i];
    std::cout << RED << "Character Destructor Called" << RESET << std::endl;
}

void Character::equip(AMateria *m) {
    int i;
	for (i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
    if (i == 4)
        std::cout << "inventory full" << std::endl;
}

void Character::unequip(int idx) {
	int	i = 0;

	if (!this->_inventory[idx])
	{
		std::cout << "Empty slot" << std::endl;
		return ;
	}
	while (i < 200)
	{
		if (!this->_floor[i])
			break;
		i++;
	}
	if (i == 20)
		std::cout << "Memory error" << std::endl;
	else
	{
		this->_floor[i] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
	return ;
}

void Character::use(int idx, ICharacter &target) {
    this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const {
    return this->_name;
}