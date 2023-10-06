/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:37:50 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/06 12:38:11 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    try {
        RobotomyRequestForm legge1("Rudeus");
        PresidentialPardonForm legge2("Orsted");
        ShrubberyCreationForm legge3("Sylphie");
        std::cout << legge1 << std::endl;
        Bureaucrat president51("Roosevelt", 149);
        Bureaucrat president50("Obama", 2);
        president50.gradeIncrement();
        std::cout << president50 << std::endl;
        president51.gradeDecrement();
        std::cout << president51 << std::endl;
        president51.signForm(legge1);
        president50.signForm(legge1);
        president50.executeForm(legge1);
        president50.signForm(legge2);
        president50.signForm(legge3);
        president50.executeForm(legge2);
        president50.executeForm(legge3);
    }
    catch (std::exception &e) { std::cout << PURPLE << "exception caught" << RESET << std::endl; }  

    return 1;
}