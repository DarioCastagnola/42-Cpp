/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:46:39 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/26 11:51:43 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("") {
    std::cout << GREEN << "Animal Constructor called" << RESET << std::endl;
}

Animal::Animal(std::string name): _type(name) {
    std::cout << GREEN << "Animal Constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &a) {
    *this = a;
}

Animal &Animal::operator=(const Animal &a) {
    if (this == &a)
        return (*this);
    this->_type = a._type;
    return(*this);
}

Animal::~Animal(void) {
    std::cout << RED << "Animal Destructor called" << RESET << std::endl;
}

std::string Animal::getType(void) const {
    return this->_type;
}

void Animal::makeSound() const {;}
