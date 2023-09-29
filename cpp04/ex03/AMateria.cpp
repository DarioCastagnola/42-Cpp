/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:26 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/29 11:46:15 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type) {
	std::cout << GREEN << "AMateria Constructor Called" << RESET << std::endl;
}

const std::string	&AMateria::getType(void) const {
	return this->_type;
}


