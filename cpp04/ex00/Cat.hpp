/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:22:46 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 12:01:12 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &c);
        Cat &operator=(const Cat &c);
        ~Cat(void);
        void makeSound() const;
    
    private:
        
};

