/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:48:32 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 16:25:15 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class  ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &s);
        ScavTrap &operator=(const ScavTrap &s);
        ~ScavTrap(void);
        void guardGate(void);
};