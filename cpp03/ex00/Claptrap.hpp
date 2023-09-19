/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:24 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/19 16:40:44 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef CLAPTRAP_HPP
// #define CLAPTRAP_HPP
#pragma once
#include <iostream>
#include <string>

class Claptrap
{
    public:
        Claptrap(void);
        Claptrap(Claptrap const &c);
        Claptrap &operator=(const Claptrap &c);
        ~Claptrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
    private:
        std::string _Name;
        int _HP;
        int _EP;
        int _AD;
};

// #endif