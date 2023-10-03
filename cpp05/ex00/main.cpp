/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:37:50 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/03 13:43:01 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    try {   
        Bureaucrat president52("Trump", 1);
        Bureaucrat president51("Roosevelt", 149);
        Bureaucrat president50("Obama", 2);
        president50.gradeIncrement();
        std::cout << president50 << std::endl;
        president51.gradeDecrement();
        std::cout << president51 << std::endl;
        president52.gradeIncrement();
    }
    catch (std::exception &e) { std::cout << PURPLE << "exception caught" << RESET << std::endl; }  

    return 1;
}