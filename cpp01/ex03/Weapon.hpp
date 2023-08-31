/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:17 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/31 11:09:53 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>


class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string   &getType();
        void                setType(std::string type);
};

#endif