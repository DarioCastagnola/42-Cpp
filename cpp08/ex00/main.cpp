/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:09:08 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/02 16:33:16 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main () {
  // using std::find with array and pointer:
  int myints[] = { 10, 20, 30, 40 };
  int *p;

  p = easyfind(myints, 30);
  (void)p;
}