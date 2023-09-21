/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:36 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/21 16:40:51 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") {;}

Cat::Cat(const Cat &c): Animal(c) {;}

Cat &Cat::operator=(const Cat &c) {
    if (this == &c)
        return(*this);
    this->_type = c._type;
    return(*this);
}

Cat::~Cat(void) {;}

void Cat::makeSound() const {
    std::cout << "miaou" << std::endl;
}