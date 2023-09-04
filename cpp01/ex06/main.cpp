/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:22:20 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/04 11:31:27 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    
	if (argc != 2)
	{
		std::cout << "Usage Error" << std::endl;
		return (1);
	}
    harl.filter(argv[1]);
    return 0;
}