/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:27:08 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/06 16:30:49 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        ~Intern();
        int  checkRequest(std::string name) const;
        AForm *makeForm(std::string name, std::string target);
        class WrongRequestException: public std::exception
        {
        virtual const char* what() const throw()
        {
        return "WrongRequest";
        }
        };
    private:
        std::string _target;
        std::string _request[3];
};