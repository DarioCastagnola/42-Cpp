/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:33 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 11:55:28 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {
    std::cout << GREEN << "Dog Constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &c): Animal(c) {
    std::cout << GREEN << "Copy Dog Constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &c) {
    if (this == &c)
        return(*this);
    this->_type = c._type;
    return(*this);
}

Dog::~Dog(void) {
    std::cout << RED << "Dog Destructor called" << RESET << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bau bau" << std::endl;
}