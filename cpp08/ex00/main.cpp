/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:09:08 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/06 11:49:07 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main () {
	int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> myVector(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::cout << WHITE << "built a vector with values of 1 2 3 4 5" << RESET << std::endl;
	std::cout << GRAY << "Searching for value 4 in the vector... " << RESET << std::endl;
	easyfind(myVector, 4);
	std::cout << GRAY << "Searching for value 6 in the vector... " << RESET << std::endl;
	easyfind(myVector, 6);
}