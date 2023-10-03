/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:37:44 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/03 16:37:41 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Form.hpp"
# ifndef COLORS
#  define GREEN "\033[1;32m"
#  define RED "\033[1;31m"
#  define CYAN "\033[1;36m"
#  define YELLOW "\033[1;33m"
#  define BLUE "\033[1;34m"
#  define PURPLE "\033[1;35m"
#  define RESET "\033[0m"
# endif

class Form;

class Bureaucrat
{
  public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &obj);
    ~Bureaucrat();
    const std::string getName() const;
    int getGrade() const;
    void gradeIncrement();
    void gradeDecrement();
    void signForm(Form &obj);
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
    int               _grade;  
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj);