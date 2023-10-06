/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:50:28 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/03 16:01:14 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        // AForm(std::string name, int signgrade, int execgrade);
        AForm(std::string name, int signgrade, int execgrade);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        ~AForm();
        const std::string getName() const;
        int getSignGrade() const;
        int getExecGrade() const;
        bool getSign() const;
        void setSign(bool);
        void beSigned(const Bureaucrat &obj);
        virtual void execute(const Bureaucrat &obj) const = 0;
        class GradeTooHighException: public std::exception
        {
        virtual const char* what() const throw()
        {
        return "GradeTooHigh";
        }
        };
        class GradeTooLowException: public std::exception
        {
        virtual const char* what() const throw()
        {
        return "GradeTooLow";
        }
        };
    private:
        const std::string _name;
        const int _signgrade;
        bool _sign;
        const int _execgrade;
};

std::ostream &operator<<(std::ostream &out, AForm const &obj);