/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:33 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/21 16:41:01 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {;}

Dog::Dog(const Dog &c): Animal(c) {;}

Dog &Dog::operator=(const Dog &c) {
    if (this == &c)
        return(*this);
    this->_type = c._type;
    return(*this);
}

Dog::~Dog(void) {;}

void Dog::makeSound() const {
    std::cout << "Bau bau" << std::endl;
}