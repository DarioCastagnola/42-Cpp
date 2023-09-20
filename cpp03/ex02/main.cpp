/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 15:50:56 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap solid("CL4P-TP"), liquid("SH4D0W");
	ScavTrap gas("G4ND4LF");
	FragTrap plasma("X3R4TH");

	plasma.highFiveGuys();
	plasma.attack(gas.getName());
	gas.takeDamage(plasma.getAD());
	gas.guardGate();
	gas.attack(solid.getName());
	solid.takeDamage(gas.getAD());
	gas.attack(liquid.getName());
	liquid.takeDamage(gas.getAD());
	return 0;
}