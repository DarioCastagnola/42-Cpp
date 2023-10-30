/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:44:07 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/30 16:39:54 by dcastagn         ###   ########.fr       */
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
    
  private:
    T *_array;
    int _size;
};

template <typename T>
Array<T>::Array(void): _size(0), _array(0) {
  return ;
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n) {
  this->_array = new T[n];
  return ;
}

Array<T>::Array(const Array<T> &obj): _array(0), _size(0) {
  *this = obj;
}