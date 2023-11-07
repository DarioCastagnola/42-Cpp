/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:42:38 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/07 12:26:04 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
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

class Span
{
    public:
        Span(unsigned int n);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();
        template <typename T>
        void    addLotsOfNumbers(T begin, T end);
        void    addNumber(int n);
        long int     shortestSpan();
        long int     longestSpan();
        int     getValue(int idx);
        class NoSpaceLeft: public std::exception
        {
            virtual const char* what() const throw()
        {
            return "Full";
        }
  };
    private:
        unsigned int _size;
        std::vector<int> _myVector;
};

template <typename T>
void    Span::addLotsOfNumbers(T begin, T end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}
