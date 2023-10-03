/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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

class Form
{
    public:
        Form(std::string name, int signgrade, int execgrade);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        ~Form();
        const std::string getName() const;
        int getSignGrade() const;
        int getExecGrade() const;
        bool getSign() const;
        void beSigned(const Bureaucrat &obj);
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

std::ostream &operator<<(std::ostream &out, Form const &obj);