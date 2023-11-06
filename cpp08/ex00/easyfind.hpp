/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:44:38 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/06 11:48:44 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#ifndef COLORS
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define CYAN "\033[1;36m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define PURPLE "\033[1;35m"
# define WHITE "\033[1;37m"
# define GRAY "\033[1;30m"
# define RESET "\033[0m"
#endif


template<typename T>
int easyfind(T smth, int num) {
    std::vector<int>::iterator p;
    p = find(smth.begin(), smth.end() , num);
    if (p != smth.end())
    {
        std::cout << GREEN << "Element found in myVector" << RESET << std::endl;
        return 1;
    }
    else
    {
        std::cout << RED << "Element not found in myVector" << RESET << std::endl;
        return 0;
    }
}