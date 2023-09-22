/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:14:11 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/22 16:22:43 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*zoo[10];
	Cat		cat;
	Cat		cpy_cat = cat;
	Dog		dog;
	Dog		cpy_dog = dog;
	Animal	elephant;

	for (int i = 0; i < 5; i++)
		zoo[i] = new Cat();
	
	for (int i = 5; i < 10; i++)
		zoo[i] = new Dog();

	for (int i = 0; i < 10; i++)
		delete zoo[i];

	return (0);
}