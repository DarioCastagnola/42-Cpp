/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:36 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 15:47:35 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") {
    std::cout << GREEN << "Cat Constructor called" << RESET << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &c): Animal(c) {
    std::cout << GREEN << "Copy Cat Constructor called" << RESET << std::endl;
    *this = c;
}

Cat &Cat::operator=(const Cat &c) {
    if (this == &c)
        return(*this);
    this->_brain = new Brain(*(c.getBrain()));
    this->_type = c._type;
    return(*this);
}

Cat::~Cat(void) {
    delete (this->_brain);
    std::cout << RED << "Cat Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout << "miaou" << std::endl;
}

Brain *Cat::getBrain() const {
    return (this->_brain);
}