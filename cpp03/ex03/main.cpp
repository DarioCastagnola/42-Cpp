/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/21 14:13:17 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap solid("CL4P-TP"), liquid("SH4D0W");
	ScavTrap gas("G4ND4LF");
	FragTrap plasma("X3R4TH");
	DiamondTrap supersolid("G0D");

	plasma.highFiveGuys();
	plasma.attack(gas.getName());
	gas.takeDamage(plasma.getAD());
	gas.guardGate();
	gas.attack(solid.getName());
	solid.takeDamage(gas.getAD());
	gas.attack(liquid.getName());
	liquid.takeDamage(gas.getAD());
	supersolid.attack(plasma.getName());
	plasma.takeDamage(supersolid.getAD());
	supersolid.attack(liquid.getName());
	liquid.takeDamage(supersolid.getAD());
	supersolid.attack(gas.getName());
	gas.takeDamage(supersolid.getAD());
	supersolid.whoAmI();
	return 0;
}