/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:58:24 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/06 12:12:12 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <stdlib.h>

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        ~RobotomyRequestForm();
        virtual void execute(const Bureaucrat &obj) const;
    private:
        std::string _target;
};