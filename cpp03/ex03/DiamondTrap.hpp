/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:13:01 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 16:26:21 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class  DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &s);
        DiamondTrap &operator=(const DiamondTrap &s);
        ~DiamondTrap(void);
        void whoAmI(void);
    private:
        std::string _name;
};