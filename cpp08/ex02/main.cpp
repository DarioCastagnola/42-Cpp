/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:57:35 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/09 12:19:27 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
    std::cout << GRAY << "printing stack : " << RESET;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
    std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "------------------------" << std::endl;

	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(17);
	std::cout << vec.back() << std::endl;
	vec.pop_back();
	std::cout << vec.size() << std::endl;
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(737);
	vec.push_back(0);
	std::vector<int>::iterator it_l = vec.begin();
	std::vector<int>::iterator ite_l = vec.end();
	++it_l;
	--it_l;
    std::cout << GRAY << "printing stack : " << RESET;
	while (it_l != ite_l)
	{
		std::cout << *it_l << " ";
		++it_l;
	}
    std::cout << std::endl;

	return 0;
}