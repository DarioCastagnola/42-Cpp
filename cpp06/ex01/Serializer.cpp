/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:11:04 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/26 12:16:00 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	return ;
}

Serializer::Serializer(Serializer const &obj)
{
	*this = obj;
	return ;
}

Serializer::~Serializer(void)
{
	return ;
}

Serializer	&Serializer::operator=(Serializer const &obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
    uintptr_t p = 0;

    p = reinterpret_cast<uintptr_t>(ptr);
    return p;
}

Data* Serializer::deserialize(uintptr_t raw) {
    Data *data;
    
    data = reinterpret_cast<Data*>(raw);
    return (data);
}