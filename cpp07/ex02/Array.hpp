/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:44:07 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/31 15:34:34 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

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
Array<T>::Array(void): _size(0), _array(new T[0]) {
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n) {
	this->_array = new T[n];
	return ;
}

template <typename T>
Array<T>::Array(const Array<T> &obj): _size(0), _array(0) {
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
		this->_array = new T[this->_size];
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