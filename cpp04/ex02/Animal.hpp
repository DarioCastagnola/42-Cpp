/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:25:22 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 15:32:00 by dcastagn         ###   ########.fr       */
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
#include "Brain.hpp"

class Brain;

class Animal
{
    public:
        Animal(void);
        Animal(std::string name);
        Animal(Animal const &a);
        Animal &operator=(const Animal &a);
        virtual ~Animal(void);
        virtual void makeSound() const;
        std::string getType() const;
        virtual Brain *getBrain() const = 0;
        
    protected:
        std::string _type;
};

// #endif