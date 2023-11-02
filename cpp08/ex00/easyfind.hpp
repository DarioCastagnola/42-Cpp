/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:44:38 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/02 16:22:55 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iostream>
#ifndef COLORS
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define CYAN "\033[1;36m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define PURPLE "\033[1;35m"
# define RESET "\033[0m"
#endif


template<class T>
int *easyfind(T smth, int num) {
    int *p;
    p = std::find(smth, smth+4 , num);
    if (p != smth+4)
        std::cout << "Element found in myints: " << *p << '\n';
    else
        std::cout << "Element not found in myints\n";
    return p;
}