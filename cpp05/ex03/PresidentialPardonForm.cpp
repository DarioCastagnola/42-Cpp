/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:58:14 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/06 12:33:05 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << YELLOW << "PresidentialPardonForm Constructor Called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()){
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
    if (this == &obj)
        return *this;
    this->_target = obj._target;
    this->setSign(obj.getSign());
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << YELLOW << "PresidentialPardonForm Destructor Called" << RESET << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &obj) const {
    if (obj.getGrade() <= this->getExecGrade() && this->getSign())
        std::cout << "Informs that " << this->_target <<  " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else
        throw GradeTooLowException();
}
