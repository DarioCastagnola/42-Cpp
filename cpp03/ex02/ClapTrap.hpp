/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:24 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/21 15:27:06 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef CLAPTRAP_HPP
// #define CLAPTRAP_HPP
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

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &c);
        ClapTrap &operator=(const ClapTrap &c);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const;
        int getHP(void) const;
        int getEP(void) const;
        int getAD(void) const;
        void setAD(int amount);
    
    protected:
        std::string _name;
        int _hp;
        int _ep;
        int _ad;
};

// #endif