/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:40:44 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/26 12:36:43 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data *ptr = new Data;
    Data *new_ptr;
    uintptr_t raw;
    
    ptr->data = "Once Twice and Thrice, can you believe it?";
    std::cout << "ptr->data = " << ptr->data << std::endl;

    raw = Serializer::serialize(ptr);

    std::cout << "raw = " << raw << std::endl;
    new_ptr = Serializer::deserialize(raw);

    std::cout << "new_ptr->data = " << new_ptr->data << std::endl;
    delete ptr;
}