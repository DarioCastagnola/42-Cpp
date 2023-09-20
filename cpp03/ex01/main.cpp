/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 14:39:09 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Scavtrap.hpp"

int	main(void)
{
	Claptrap solid("CL4P-TP"), liquid("SH4D0W");
	Scavtrap gas("G4ND4LF");

	gas.guardGate();
	gas.attack(solid.getName());
	solid.takeDamage(gas.getAD());
	gas.attack(liquid.getName());
	liquid.takeDamage(gas.getAD());
	return 0;
}