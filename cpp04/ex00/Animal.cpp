/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:39 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/21 16:40:40 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("") {;}

Animal::Animal(std::string name): _type(name) {;}

Animal::Animal(const Animal &a) {
    *this = a;
}

Animal &Animal::operator=(const Animal &a) {
    if (this == &a)
        return (*this);
    this->_type = a._type;
    return(*this);
}

Animal::~Animal(void) {;}

std::string Animal::getType(void) const {
    return this->_type;
}

void Animal::makeSound() const {
    std::cout << "Animal noises I guess" << std::endl; 
}

