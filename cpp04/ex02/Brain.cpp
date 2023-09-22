/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:11:11 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 15:05:00 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << GREEN << "Brain Constructor called" << RESET << std::endl;
    for (int i = 0; i < 100; i++)
        this->setIdea("something ig", i);
}

Brain::Brain(const Brain &obj) {
    std::cout << GREEN << "Copy Brain Constructor called" << RESET << std::endl;
    *this = obj;
}

Brain   &Brain::operator=(const Brain &obj) {
    if (this == &obj)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = obj._ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << RED << "Brain Destructor called" << RESET << std::endl;
}

std::string Brain::getIdea(int i) const {
    return this->_ideas[i];
}

void Brain::setIdea(std::string idea, int i) {
    this->_ideas[i] = idea;
}
