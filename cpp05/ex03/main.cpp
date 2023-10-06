/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:37:50 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/06 16:46:58 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
    try {
        Intern someRandomIntern;    
        AForm *mangod = someRandomIntern.makeForm("robotomy requet", "Frieren");
        std::cout << *mangod << std::endl;
        RobotomyRequestForm legge1("Rudeus");
        PresidentialPardonForm legge2("Orsted");
        ShrubberyCreationForm legge3("Sylphie");
        std::cout << legge1 << std::endl;
        std::cout << legge2 << std::endl;
        std::cout << legge3 << std::endl;
        Bureaucrat president51("Roosevelt", 137);
        Bureaucrat president50("Obama", 2);
        president50.gradeIncrement();
        std::cout << president50 << std::endl;
        president51.gradeDecrement();
        std::cout << president51 << std::endl;
        president51.signForm(legge1);
        president50.signForm(legge1);
        president51.signForm(legge2);
        president51.signForm(legge3);
        president50.signForm(legge2);
        president50.signForm(legge3);
        std::cout << legge1 << std::endl;
        std::cout << legge2 << std::endl;
        std::cout << legge3 << std::endl;
        president51.executeForm(legge1);
        president51.executeForm(legge2);
        president51.executeForm(legge3);
        president50.executeForm(legge1);
        president50.executeForm(legge2);
        president50.executeForm(legge3);
    }
    catch (std::exception &e) { std::cout << PURPLE << "exception caught" << RESET << std::endl; }  

    return 1;
}