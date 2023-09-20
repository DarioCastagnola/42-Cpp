/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:48:32 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 14:53:23 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class  Scavtrap : public ClapTrap
{
    public:
        Scavtrap(std::string name);
        Scavtrap(const Scavtrap &s);
        Scavtrap &operator=(const Scavtrap &s);
        ~Scavtrap(void);
        void guardGate(void);
};