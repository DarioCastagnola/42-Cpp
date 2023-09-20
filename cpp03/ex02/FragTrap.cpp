/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:47:34 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 15:46:36 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->_hp = 100;
    this->_ep = 100;
    this->_ad = 30;
    std::cout << "Frag Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &s): ClapTrap(s) {
    std::cout << "Frag Copy Constructor Called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &s) {
    if (this == &s)
        return (*this);
    return(*this);
}

FragTrap::~FragTrap(void) {
    std::cout << "Frag Destructor Called" << std::endl;
}
 
void FragTrap::highFiveGuys(void) {
    std::cout << "GIMME FIVE! You've earned it." << std::endl;
}