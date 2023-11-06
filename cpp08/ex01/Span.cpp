/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:23:17 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/06 16:25:13 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _size(n) {
    ;
}

Span::Span(const Span &obj) {
    *this = obj;
}

Span &Span::operator=(const Span &obj) {
    if (this == &obj)
        return *this;
    this->_myVector = obj._myVector;
    this->_size = obj._size;
    return *this;
}

Span::~Span() {
    std::cout << RED << "Deconstructor Called" << RESET << std::endl;
}

void Span::addNumber(int n) {
    if (this->_myVector.size() > this->_size)
        throw NoSpaceLeft();
    this->_myVector.push_back(n);
}

int Span::getValue(int idx) {
    return this->_myVector[idx];
}

int Span::shortestSpan() {
    if (this->_size == 1  || !this->_size)
        throw NoSpaceLeft();
    std::vector<int> tmp = this->_myVector;
	int	diff = 2147483647;

	for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end() - 1; i++)
		if (std::abs(*i - *(i + 1)) < diff)
			diff = std::abs(*i - *(i + 1));
	return (diff);
}

int Span::longestSpan() {
    if (this->_size == 1  || !this->_size)
        throw NoSpaceLeft();
    std::vector<int> tmp = this->_myVector;
	int	diff = 2147483647;

	for (std::vector<int>::iterator i = tmp.begin(); i != tmp.end() - 1; i++)
		if (std::abs(*i - *(i + 1)) < diff)
			diff = std::abs(*i - *(i + 1));
	return (diff);
}
