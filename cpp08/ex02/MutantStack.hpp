/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:01:29 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/09 11:21:33 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <list>
#include <stack>
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


template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void): std::stack<T>() {};
		MutantStack(MutantStack const &obj): std::stack<T>(obj) {};
		~MutantStack(void) {};
		MutantStack	&operator = (MutantStack const &obj)
		{
			if (this == &obj)
				return (*this);
			this->c = obj.c;
			return (*this);
		};
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin(void) { return this->c.begin(); }
		iterator	end(void) { return this->c.end(); }
};