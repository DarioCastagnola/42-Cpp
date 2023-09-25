/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:57:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/25 16:37:02 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(void): AMateria("Cure") {;}

Cure::Cure(const Cure &obj): AMateria(obj) {
    *this = obj;
}

Cure &Cure::operator=(const Cure &obj) {
    if (this == &obj)
        return (*this);
    this->_type = obj._type;
}

Cure::~Cure(void) {;}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}