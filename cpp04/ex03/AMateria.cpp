/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:37:26 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/25 15:43:31 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type) {;}

AMateria::AMateria(const AMateria &obj) {;}

AMateria &AMateria::operator=(const AMateria &obj) {
    if (this == &obj)
        return (*this);
    this->_type = obj._type;
}

AMateria::~AMateria(void) {;}

