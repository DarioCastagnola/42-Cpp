/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:37:47 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/03 14:48:17 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade) {
    std::cout << YELLOW << "Bureaucrat Constructor called" << RESET << std::endl;
    if (this->_grade >= 1 && this->_grade <= 150) 
         std::cout << GREEN << "Access granted" << RESET << std::endl;
    else if (this->_grade < 1)
        throw GradeTooHighException();
    else if (this->_grade > 150)
        throw GradeTooLowException(); 
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): _name(obj._name) {
    *this = obj;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
    if (this == &obj)
        return *this;
    this->_grade = obj._grade;
    return *this;
}
Bureaucrat::~Bureaucrat() {
    std::cout << YELLOW << "Bureaucrat Destructor called" << RESET << std::endl;    
}

const std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::gradeDecrement() {
    std::cout << "Requesting permission to decrement " << this->_name << "'s grade" << std::endl;
    if (this->_grade == 150)
    {
        std::cout << RED << "Permission Denied" << RESET << std::endl;
        throw GradeTooLowException();
    }
    this->_grade++;
    std::cout << GREEN << "Permission granted" << RESET << std::endl;
}

void Bureaucrat::gradeIncrement() {
    std::cout << "Requesting permission to increment " << this->_name << "'s grade" << std::endl;
    if (this->_grade == 1)
    {
        std::cout << RED << "Permission Denied" << RESET << std::endl;
        throw GradeTooHighException();
    }
    this->_grade--;
    std::cout << GREEN << "Permission granted" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj) {
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return out;
}