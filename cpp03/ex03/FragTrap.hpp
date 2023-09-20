/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:05:44 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 16:25:08 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &s);
        FragTrap &operator=(const FragTrap &s);
        ~FragTrap(void);
        void highFiveGuys(void);
};