/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:25:08 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/29 11:48:37 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << GREEN << "MateriaSource Constructor Called" << RESET << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj) {
    *this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
    if (this == &obj)
        return *this;
    for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != 0)
			delete this->_inventory[i];
		this->_inventory[i] = obj._inventory[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	std::cout << RED << "MateriaSource Destructor Called" << RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "learning " << this->_inventory[i]->getType() << " materia" << std::endl;
			break ;
		}
	}
}


AMateria *MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4 && this->_inventory[i]; i++)
	{
		if (this->_inventory[i]->getType() == type)
		{
			std::cout << "creating " << this->_inventory[i]->getType() << " materia" << std::endl;
			return (this->_inventory[i]->clone());
		}
	}
	return (NULL);
}