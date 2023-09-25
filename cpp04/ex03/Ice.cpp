/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:40:27 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/25 16:38:49 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {;}

Ice::Ice(const Ice &obj): AMateria(obj) {
    *this = obj;
}

Ice &Ice::operator=(const Ice &obj) {
    if (this == &obj)
        return (*this);
    this->_type = obj._type;
}

Ice::~Ice(void) {;}

void Ice::use(ICharacter &target) {
    std::cout << BLUE << "* shoots an icebolt at " << target.getName() << " *" << std::endl;
}