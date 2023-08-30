/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:05:33 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/30 12:27:27 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z1, *z2, *z3;

    z1 = zombieHorde(4, "Aqua");
    z2 = zombieHorde(3, "Megumin");
    z3 = zombieHorde(2, "Darkness");
    delete [] z1;
    delete [] z2;
    delete [] z3;
    return 0;
}