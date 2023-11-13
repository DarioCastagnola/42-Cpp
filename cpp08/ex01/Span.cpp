/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:23:17 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/13 14:28:53 by dcastagn         ###   ########.fr       */
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

long int Span::shortestSpan() {
    if (this->_size == 1  || !this->_size || this->_myVector.empty())
        throw NoSpaceLeft();
    std::sort(this->_myVector.begin(), this->_myVector.begin() + this->_size);
    // std::cout << "sorted array: ";
    // for (unsigned int i = 0; i < this->_size; i++)
	// 	std::cout << " " << this->_myVector[i];
	// std::cout << std::endl;
    long tmp =  5147483647;
    for (unsigned int i = 0; i < this->_size - 1; i++)
    {
        long a = static_cast<long>(this->_myVector[i]);
        long b = static_cast<long>(this->_myVector[i + 1]);
        if (std::abs(a - b) < tmp)
            tmp = std::abs(a - b);
    }
    return tmp;
}

long int Span::longestSpan() {
    if (this->_size == 1  || !this->_size || this->_myVector.empty())
        throw NoSpaceLeft();
    std::sort(this->_myVector.begin(), this->_myVector.begin() + this->_size);
    long tmp =  5147483647;
    long a = static_cast<long>(this->_myVector[0]);
    long b = static_cast<long>(this->_myVector[this->_size - 1]);
    tmp = std::abs(a - b);
    return tmp;
}
