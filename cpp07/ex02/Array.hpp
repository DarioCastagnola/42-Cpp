/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:44:07 by dcastagn          #+#    #+#             */
/*   Updated: 2024/05/14 12:29:21 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
# ifndef COLORS
#  define GREEN "\033[1;32m"
#  define RED "\033[1;31m"
#  define CYAN "\033[1;36m"
#  define YELLOW "\033[1;33m"
#  define BLUE "\033[1;34m"
#  define PURPLE "\033[1;35m"
#  define RESET "\033[0m"
# endif

template <typename T>
class Array {
  public:
  	Array(void);
	Array(unsigned int n);
	Array(const Array &obj);
	Array &operator=(const Array &obj);
    ~Array();
	T &operator[](int pos);
	int size(void) const;
	class	OutOfBoundsException: public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("index out of bounds");
		}
	};
	
  private:
    int _size;
    T *_array;
};

template <typename T>
Array<T>::Array(void): _size(0), _array(new T[0]()) {
	std::cout << GREEN << "Empty Array constructed" << RESET << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n) {
	std::cout << GREEN << "Array constructed" << RESET << std::endl;
	this->_array = new T[n]();
	return ;
}

template <typename T>
Array<T>::Array(const Array<T> &obj): _size(0), _array(0) {
	std::cout << GREEN << "Copy of Array constructed" << RESET << std::endl;
	*this = obj;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj) {
	if (this == &obj)
		return *this;
	this->_size = obj._size;
	delete [] this->_array;
	if (this->_size)
	{
		this->_array = new T[this->_size]();
		for (int i = 0; i < this->_size; i++)
		{
			this->_array[i] = obj._array[i];			
		}
	}
	else
		this->_array = 0;
	return *this;
}

template <typename T>
Array<T>::~Array() {
	std::cout << RED << "Array Deconstrutor called" << RESET << std::endl;
	delete [] this->_array;
}

template <typename T>
T &Array<T>::operator[](int pos) {
	if (pos >= this->_size || pos < 0)
		throw (Array<T>::OutOfBoundsException());
	return (this->_array[pos]);
}

template <typename T>
int Array<T>::size(void) const {
	return (this->_size);
}