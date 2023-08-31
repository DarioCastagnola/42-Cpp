/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:13 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/30 16:45:12 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
    ;
}

Weapon::~Weapon(void)
{
    return ;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string &Weapon::getType()
{
    return(this->_type);
}