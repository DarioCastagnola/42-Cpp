/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:06:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/25 15:14:37 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{
    public:
        ~Character();
        std::string const & getName() const = 0;
        void equip(AMateria *m) = 0;
        void unequip(int idx) = 0;
        void use(int idx, ICharacter& target) = 0;
};