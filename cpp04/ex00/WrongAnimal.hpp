/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:34:14 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/02 10:43:54 by dcastagn         ###   ########.fr       */
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

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(std::string name);
        WrongAnimal(WrongAnimal const &a);
        WrongAnimal &operator=(const WrongAnimal &a);
        virtual ~WrongAnimal(void);
        void makeSound() const;
        std::string getType() const;
        
    protected:
        std::string _type;
};
