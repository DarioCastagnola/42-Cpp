/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:08:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/28 14:45:50 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z1, *z2, *z3;
    
    randomChump("Cliff");
    randomChump("Rudeus");
    randomChump("Zanoba");
    z1 = newZombie("Roxy");
    z2 = newZombie("Eris");
    z3 = newZombie("Sylphiette");
    delete z3;
    delete z2;
    delete z1;
    return 0;
}