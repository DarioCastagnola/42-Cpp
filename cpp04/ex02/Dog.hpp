/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:23:53 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/26 11:22:53 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &c);
        Dog &operator=(const Dog &c);
        ~Dog(void);
        virtual void makeSound() const;
        Brain *getBrain() const;
    
    private:
        Brain *_brain;
};

// #endif