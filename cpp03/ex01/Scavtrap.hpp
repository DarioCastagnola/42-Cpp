/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:48:32 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 14:20:15 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Claptrap.hpp"

class  Scavtrap : public Claptrap
{
    public:
        Scavtrap(std::string name);
        Scavtrap(const Scavtrap &s);
        Scavtrap &operator=(const Scavtrap &s);
        ~Scavtrap(void);
        void guardGate(void);
};