/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:37:50 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/09 12:01:46 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
    try {
        Intern gpanico;
        Intern adistef;
        Intern mpaterno;    
        AForm *pardonform = gpanico.makeForm("presidential pardon", "Articuno");
        AForm *robotomyform = adistef.makeForm("robotomy request", "Zapdos");
        AForm *shruberryform = mpaterno.makeForm("shrubbery creation", "Moltres");
        std::cout << *pardonform << std::endl;
        std::cout << *robotomyform << std::endl;
        std::cout << *shruberryform << std::endl;
        Bureaucrat president51("Gcucino", 147);
        Bureaucrat president50("FFrau", 2);
        president50.gradeIncrement();
        std::cout << president50 << std::endl;
        president51.gradeDecrement();
        std::cout << president51 << std::endl;
        president51.signForm(*pardonform);
        president51.signForm(*shruberryform);
        president51.signForm(*robotomyform);
        president50.signForm(*pardonform);
        president50.signForm(*shruberryform);
        president50.signForm(*robotomyform);
        std::cout << *pardonform << std::endl;
        std::cout << *robotomyform << std::endl;
        std::cout << *shruberryform << std::endl;
        president51.executeForm(*pardonform);
        president51.executeForm(*shruberryform);
        president51.executeForm(*robotomyform);
        president50.executeForm(*pardonform);
        president50.executeForm(*shruberryform);
        president50.executeForm(*robotomyform);
        delete (pardonform);
        delete (shruberryform);
        delete (robotomyform);
        // president51.signForm(legge1);
        // president50.signForm(legge1);
        // president51.signForm(legge2);
        // president51.signForm(legge3);
        // president50.signForm(legge2);
        // president50.signForm(legge3);
        // std::cout << legge1 << std::endl;
        // std::cout << legge2 << std::endl;
        // std::cout << legge3 << std::endl;
        // president51.executeForm(legge1);
        // president51.executeForm(legge2);
        // president51.executeForm(legge3);
        // president50.executeForm(legge1);
        // president50.executeForm(legge2);
        // president50.executeForm(legge3);
    }
    catch (std::exception &e) { std::cout << PURPLE << "exception caught" << RESET << std::endl; }  

    return 1;
}