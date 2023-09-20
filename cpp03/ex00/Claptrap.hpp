/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:24 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/20 12:19:07 by dcastagn         ###   ########.fr       */
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
        Claptrap(std::string name);
        Claptrap(Claptrap const &c);
        Claptrap &operator=(const Claptrap &c);
        ~Claptrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void);
        int getHP(void);
        int getEP(void);
        int getAD(void);
        void setAD(int amount);
    
    private:
        std::string _name;
        int _hp;
        int _ep;
        int _ad;
};

// #endif