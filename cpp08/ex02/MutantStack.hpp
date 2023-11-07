/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:01:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/07 16:31:38 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <iostream>
#include <list>
#include <deque>
#ifndef COLORS
# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define CYAN "\033[1;36m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define PURPLE "\033[1;35m"
# define WHITE "\033[1;37m"
# define GRAY "\033[1;30m"
# define RESET "\033[0m"
#endif

template <typename T, typename container_type = std::deque<T> >
class MutantStack: public std::stack<T, container_type>
{
    public:
        MutantStack(void) {
            return ;
        };
        MutantStack(const MutantStack<T, container_type> &obj): MutantStack<T, container_type>::stack(obj) {
            *this = obj;
        };
        MutantStack &operator=(const MutantStack<T, container_type> &obj) {
            if (this = &obj)
                return *this;
            this->c = obj.c;
        };
        ~MutantStack() {
            return  ;
        };
        typedef typename container_type::iterator iterator;
        iterator begin() {
            return this->c.begin();
        };
        iterator end() {
            return this->c.end();
        };
};
