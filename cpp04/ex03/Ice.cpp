/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:40:27 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/29 14:27:42 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
    std::cout << GREEN << "Ice Constructor Called" << RESET << std::endl;
}

Ice::Ice(const Ice &obj): AMateria(obj) {
    *this = obj;
}

Ice &Ice::operator=(const Ice &obj) {
    if (this == &obj)
        return (*this);
    this->_type = obj._type;
    return (*this);
}

Ice::~Ice(void) {
    std::cout << RED << "Ice Destructor Called" << RESET << std::endl;
}

AMateria *Ice::clone() const {
	AMateria	*clone;
	clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an " << CYAN << "icebolt " << RESET << "at " << RED << target.getName() << RESET<< " *" << std::endl;
}