/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:45:59 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 13:51:16 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Animal.hpp"

class Brain
{
    public:
        Brain(void);
        Brain(const Brain &obj);
        ~Brain(void);
        Brain&		operator=(const Brain &obj);
        std::string	getIdea(int i) const;
        void		setIdea(std::string idea, int i);

    private:
        std::string _ideas[100];
        
    
};