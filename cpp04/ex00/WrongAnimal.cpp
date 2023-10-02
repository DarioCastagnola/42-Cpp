/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:41:19 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/02 10:45:13 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("") {
    std::cout << GREEN << "WrongAnimal Constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string name): _type(name) {
    std::cout << GREEN << "WrongAnimal Constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) {
    *this = a;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a) {
    if (this == &a)
        return (*this);
    this->_type = a._type;
    return(*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << RED << "WrongAnimal Destructor called" << RESET << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return this->_type;
}

void WrongAnimal::makeSound() const {
    std::cout << "OOOUUHH" << std::endl;
}

