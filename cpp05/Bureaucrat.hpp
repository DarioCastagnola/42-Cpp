/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:37:44 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/02 16:12:06 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
# ifndef COLORS
#  define GREEN "\033[1;32m"
#  define RED "\033[1;31m"
#  define CYAN "\033[1;36m"
#  define PURPLE "\033[1;35m"
#  define RESET "\033[0m"
# endif

class Bureaucrat
{
  public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &obj);
    ~Bureaucrat();
    const std::string getName() const;
    int getGrade() const;
    
  private:
    const std::string _name;
    int               _grade;  
};