/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:29:53 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/30 12:20:02 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name )
{
    Zombie  *myZombie;
    
    myZombie = new Zombie[N];   
    
    for (int i = 0; i < N; i++)
    {
        myZombie[i].setName(name);
        myZombie[i].announce();
    }
    return (myZombie);
    // for (int i = 0; i < N ; i++)
    // {
    //     undead[i] = new Zombie(name);
    //     undead[i]->announce();
    //     delete undead[i];
    // }
    // return (*undead);
    
}