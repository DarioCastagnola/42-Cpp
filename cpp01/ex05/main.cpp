/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:05:09 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/01 15:24:29 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    
	if (argc != 2)
	{
		std::cout << "Usage Error" << std::endl;
		return (1);
	}
    harl.complain(argv[1]);
    return 0;
}