/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:58:20 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/09 11:38:35 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << YELLOW << "RobotomyRequestForm Constructor Called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()) {
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {   
    if (this == &obj)
        return *this;
    this->_target = obj._target;
    this->setSign(obj.getSign());
    return *this; 
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << YELLOW << "RobotomyRequestForm Destructor Called" << RESET << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &obj) const {
    if (obj.getGrade() <= this->getExecGrade() && this->getSign())
    {
        srand(time(NULL));
        if (rand() % 2 == 1)
            std::cout << "Informs that " << this->_target <<  " has been successfully robotomized." << std::endl;
        else
            std::cout << "Informs that " << this->_target <<  "'s robotomy failed." << std::endl;
    }
    else
        throw GradeTooHighException();
}