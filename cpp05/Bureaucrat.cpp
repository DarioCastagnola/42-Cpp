/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:37:47 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/02 16:29:28 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade) {
    std::cout << GREEN << "Bureaucrat Constructor Called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) {
    *this = obj;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
    if (this == &obj)
        return *this;
    this->_grade = obj._grade;
}
~Bureaucrat() {
    std::cout << RED << "Bureaucrat Destructor called" << RESET << std::endl;    
}

const std::string getName() const {
    return this->_name;
}

int getGrade() const {
    return this->_grade;
}