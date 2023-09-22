/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:36 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 11:54:41 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") {
    std::cout << GREEN << "Cat Constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &c): Animal(c) {
    std::cout << GREEN << "Copy Cat Constructor called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &c) {
    if (this == &c)
        return(*this);
    this->_type = c._type;
    return(*this);
}

Cat::~Cat(void) {
    std::cout << RED << "Cat Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout << "miaou" << std::endl;
}