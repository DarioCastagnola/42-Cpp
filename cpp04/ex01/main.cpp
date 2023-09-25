/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:14:11 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/25 11:41:23 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int	main(void)
// {
// 	Animal	*zoo[10];
// 	Cat		cat;
// 	Cat		cpy_cat = cat;
// 	Dog		dog;
// 	Dog		cpy_dog = dog;
// 	Animal	elephant;

	

// 	for (int i = 0; i < 5; i++)
// 		zoo[i] = new Cat();
	
// 	for (int i = 5; i < 10; i++)
// 		zoo[i] = new Dog();

// 	for (int i = 0; i < 10; i++)
// 		delete zoo[i];

// 	return (0);
// }

int main( void )
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;

	// Proof of deep copy
	Dog medor;
	Cat fifi;

	Dog &medor_ref = medor;
	Cat &fifi_ref = fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	// Array of animals
	const Animal	*animal_array[4];
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;
}