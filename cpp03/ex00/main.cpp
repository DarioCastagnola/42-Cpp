/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 15:48:07 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap solid("CL4P-TP"), liquid("SH4D0W");

	solid.setAD(0);
	liquid.setAD(1);
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
	liquid.attack(solid.getName());
	solid.takeDamage(liquid.getAD());
	
	solid.attack(liquid.getName());
	liquid.takeDamage(solid.getAD());
    solid.beRepaired(1);
	liquid.attack(solid.getName());

    solid.takeDamage(liquid.getAD());
	return (0);
}