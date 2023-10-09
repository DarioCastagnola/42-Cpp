/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:27:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/09 11:58:20 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {
	std::cout << YELLOW << "Intern constructor called" << RESET << std::endl;
    this->_request[0] = "shrubbery creation";
    this->_request[1] = "robotomy request";
    this->_request[2] = "presidential pardon";
	return ;
}

Intern::Intern(Intern const &obj) {
	*this = obj;
	return ;
}

Intern::~Intern(void) {
	std::cout << YELLOW << "Intern destructor called" << RESET << std::endl;
	return ;
}

Intern	&Intern::operator=(Intern const &obj) {
	if (this == &obj)
		return (*this);
    for (int i = 0; i < 3; i++)
    {
        this->_request[i] = obj._request[i];
    }
	return (*this);
}

int	Intern::checkRequest(std::string name) const  {
	for (int i = 0; i < 3; i++)
    {
        if (this->_request[i] == name)
            return i;
    }
		throw (Intern::WrongRequestException());
}

AForm	*Intern::makeForm(std::string name, std::string target) {
	AForm	*form;
    int i = 0;

	form = 0;
	i = this->checkRequest(name);

	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates: " << "ShrubberyCreationForm" << std::endl;
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			std::cout << "Intern creates: " << "RobotomyRequestForm" << std::endl;
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates: " << "PresidentialPardonForm" << std::endl;
			break;
		default: {}
	}
	return (form);
}