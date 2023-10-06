/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:27:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/06 16:48:41 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {
	std::cout << YELLOW << "Intern constructor called" << RESET << std::endl;
    this->_request[0] = "shubbery creation";
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
	try
	{
		i = this->checkRequest(name);

		switch (i)
		{
			case 0:
				form = new ShrubberyCreationForm(target);
				break;
			case 1:
				form = new RobotomyRequestForm(target);
				break;
			case 2:
				form = new PresidentialPardonForm(target);
				break;
			default: {}
		}
	}
	catch (std::exception &e)
	{
		std::cout << PURPLE << "Invalid operation: " << RESET << e.what() << std::endl;
	}
	return (form);
}