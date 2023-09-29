/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:57:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/29 14:27:34 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
    std::cout << GREEN << "Cure Constructor Called" << RESET << std::endl;
}

Cure::Cure(const Cure &obj): AMateria(obj) {
    *this = obj;
}

Cure &Cure::operator=(const Cure &obj) {
    if (this == &obj)
        return (*this);
    this->_type = obj._type;
    return (*this);
}

Cure::~Cure(void) {
    std::cout << RED << "Cure Destructor Called" << RESET << std::endl;
}

AMateria *Cure::clone() const {
    AMateria	*clone;
	clone = new Cure();
	return (clone);
}
 
void Cure::use(ICharacter &target) {
    std::cout << "* " << YELLOW << "heals " << BLUE << target.getName() << RESET << "'s wounds *" << std::endl;
}
