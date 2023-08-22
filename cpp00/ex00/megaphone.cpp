/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:26:52 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/17 11:12:44 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    char text;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; argv[i] != 0; i++)
    {
        for (int j = 0; argv[i][j] != 0; j++)
        {
            text = argv[i][j];
            std::cout << (char)std::toupper(text);
        }
    }
    std::cout << std::endl;
    return 0;
}