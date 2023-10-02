/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:37:12 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/02 10:37:34 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") {
    std::cout << GREEN << "WrongCat Constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &c): WrongAnimal(c) {
    std::cout << GREEN << "Copy WrongCat Constructor called" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &c) {
    if (this == &c)
        return(*this);
    this->_type = c._type;
    return(*this);
}

WrongCat::~WrongCat(void) {
    std::cout << RED << "WrongCat Destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "uoaim" << std::endl;
}