/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:33 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 15:46:57 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {
    std::cout << GREEN << "Dog Constructor called" << RESET << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &c): Animal(c) {
    std::cout << GREEN << "Copy Dog Constructor called" << RESET << std::endl;
    *this = c;
}

Dog &Dog::operator=(const Dog &c) {
    if (this == &c)
        return(*this);
    this->_type = c._type;
    this->_brain = new Brain(*(c.getBrain()));
    return(*this);
}

Dog::~Dog(void) {
    delete (this->_brain);
    std::cout << RED << "Dog Destructor called" << RESET << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bau bau" << std::endl;
}

Brain *Dog::getBrain() const {
    return (this->_brain);
}