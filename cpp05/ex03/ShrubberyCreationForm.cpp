/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:58:27 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/06 12:33:13 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << YELLOW << "ShrubberyCreationForm Constructor Called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()) {
    *this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
    if (this == &obj)
        return *this;
    this->_target = obj._target;
    this->setSign(obj.getSign());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << YELLOW << "ShrubberyCreationForm Destructor Called" << RESET << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &obj) const {
    if (obj.getGrade() <= this->getExecGrade() && this->getSign())
    {
        std::ofstream   rfile;
        rfile.open ("file");
        std::string	tree = "       _-_\n\
    /~~   ~~\\\n\
 /~~         ~~\\\n\
{               }\n\
 \\  _-     -_  /\n\
   ~  \\\\ //  ~\n\
_- -   | | _- _\n\
  _ -  | |   -_\n\
      // \\\\\n";
        rfile << tree << std::endl;
    }
    else
        throw GradeTooLowException();
}