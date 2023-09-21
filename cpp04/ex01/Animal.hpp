/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:25:22 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/21 16:07:05 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Animal
{
    public:
        Animal(void);
        Animal(std::string name);
        Animal(Animal const &a);
        Animal &operator=(const Animal &a);
        ~Animal(void);
        void makeSound();
    
    protected:
        std::string _type;
};

// #endif