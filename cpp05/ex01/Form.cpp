/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:50:30 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/03 16:00:25 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signgrade, int execgrade): _name(name), _signgrade(signgrade), _sign(false), _execgrade(execgrade) {
    std::cout << YELLOW << "Form Constructor Called" << RESET << std::endl;
}

Form::Form(const Form &obj): _name(obj._name), _signgrade(obj._signgrade), _execgrade(obj._signgrade) {
    *this = obj;
}

Form &Form::operator=(const Form &obj) {
    if (this == &obj)
        return *this;
    this->_sign = obj._sign;
    return *this;
}

Form::~Form() {
    std::cout << YELLOW << "Form Destructor Called" << RESET << std::endl;
}

int Form::getExecGrade() const {
    return this->_execgrade;
}

int Form::getSignGrade() const {
    return this->_signgrade;
}

const std::string Form::getName() const {
    return this->_name;
}

bool Form::getSign() const {
    return this->_sign;
}

void Form::beSigned(const Bureaucrat &obj) {
    if (obj.getGrade() <= this->_signgrade)
        this->_sign = true;
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Form const &obj) {
    out << obj.getName() << ", form's required signing grade " << obj.getSignGrade() << ", form's required executing grade " << obj.getExecGrade();
    return out;
}