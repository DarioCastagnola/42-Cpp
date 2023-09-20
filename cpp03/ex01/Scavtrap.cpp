/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:48:35 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 14:40:42 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

Scavtrap::Scavtrap(std::string name): Claptrap(name) {
    std::cout << "Scav Constructor Called" << std::endl;
}

Scavtrap::Scavtrap(const Scavtrap &s): Claptrap(s) {
    std::cout << "Scav Copy Constructor Called" << std::endl;
}

Scavtrap &Scavtrap::operator=(const Scavtrap &s) {
    if (this == &s)
        return (*this);
    return(*this);
}

Scavtrap::~Scavtrap(void) {
    std::cout << "Scav Destructor Called" << std::endl;
}
 
void Scavtrap::guardGate(void) {
    std::cout << this->getName() << " activates gatekeeper mode. HE SHALL NOT LET YOU PASS!" << std::endl;
}
