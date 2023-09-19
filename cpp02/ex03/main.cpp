/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:01:11 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/19 13:36:24 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    Point a(1.0f, 8.0f);
    Point b(21.0f, 14.0f);
    Point c(19.0f, 12.0f);
    Point point(-5.32f, -4.28f);
    // Point point(3.46f, 6.26f);
    
    if (bsp(a, b, c, point) == true) {
        std::cout << "Correct" << std::endl;
        return 0;
    }
    std::cout << "Error" << std::endl; 
    return 0;
}