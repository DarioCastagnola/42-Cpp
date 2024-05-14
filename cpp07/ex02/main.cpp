/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:02:28 by dcastagn          #+#    #+#             */
/*   Updated: 2024/05/14 12:28:27 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include "Array.hpp"

#define MAX_VAL 750
int main() {
        Array<int> a;
        Array<int> b(5);
    try {
        std::cout << "Array default initialization test(Test with Valgrind): "  << b[0] << std::endl;
        std::cout << a[0] << std::endl;
    }
    catch (std::exception &e) { std::cerr << e.what() << '\n'; }
    b[0] = 3;
    std::cout << "Valore assegnato a b[0]: " << b[0] << std::endl;
    a = b;
    std::cout << "Valore di a[0] ottenuto dall'operatore uguale: " << a[0] << std::endl;
    std::cout << "Valore di b[0] dopo l'operatore uguale: " << a[0] << std::endl;
    Array<int> c(b);
    std::cout << "Valore di b[0] dopo il costruttore copia: " << a[0] << std::endl;
    std::cout << "Valore di c[0] ottenuto dal costruttore di copia: " << c[0] << std::endl;
    b[0] = 5;
    std::cout << "Nuovo valore assegnato a b[0]: " << b[0] << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE TESTING
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
