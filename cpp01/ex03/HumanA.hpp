/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:44:26 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/31 11:25:50 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);

	private:

		std::string	_name;
		Weapon &_weapon;
};