/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 15:19:09 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap solid("CL4P-TP"), liquid("SH4D0W");
	ScavTrap gas("G4ND4LF");

	liquid.attack(gas.getName());
	gas.takeDamage(liquid.getAD());
	gas.guardGate();
	gas.attack(solid.getName());
	solid.takeDamage(gas.getAD());
	gas.attack(liquid.getName());
	liquid.takeDamage(gas.getAD());
	return 0;
}