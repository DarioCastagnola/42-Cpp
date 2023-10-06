/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:50:30 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/03 16:00:25 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// AForm::AForm(std::string name, int signgrade, int execgrade): _name(name), _signgrade(signgrade), _sign(false), _execgrade(execgrade) {
//     std::cout << YELLOW << "AForm Default Constructor Called" << RESET << std::endl;
// }

AForm::AForm(std::string name, int signgrade, int execgrade): _name(name), _signgrade(signgrade), _sign(false), _execgrade(execgrade) {
    std::cout << YELLOW << "AForm Constructor Called" << RESET << std::endl;
}

AForm::AForm(const AForm &obj): _name(obj._name), _signgrade(obj._signgrade), _execgrade(obj._signgrade) {
    *this = obj;
}

AForm &AForm::operator=(const AForm &obj) {
    if (this == &obj)
        return *this;
    this->_sign = obj._sign;
    return *this;
}

AForm::~AForm() {
    std::cout << YELLOW << "AForm Destructor Called" << RESET << std::endl;
}

int AForm::getExecGrade() const {
    return this->_execgrade;
}

int AForm::getSignGrade() const {
    return this->_signgrade;
}

const std::string AForm::getName() const {
    return this->_name;
}

bool AForm::getSign() const {
    return this->_sign;
}

void AForm::setSign(bool sign) {
    this->_sign = sign;
}

void AForm::beSigned(const Bureaucrat &obj) {
    if (obj.getGrade() <= this->_signgrade)
        this->_sign = true;
    else
        throw GradeTooLowException();
}

void AForm::execute(const Bureaucrat &obj) const {
    std::cout << obj.getGrade() << std::endl;
    if (obj.getGrade() <= this->_signgrade && this->_sign == true)
        std::cout << "ciao" << std::endl;
}

std::ostream &operator<<(std::ostream &out, AForm const &obj) {
    out << CYAN << obj.getName() << RESET << ": required signing grade " << obj.getSignGrade() << ",  required executing grade " << obj.getExecGrade() << " Sign = " << obj.getSign();
    return out;
}