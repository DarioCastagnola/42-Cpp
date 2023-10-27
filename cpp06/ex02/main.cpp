/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:18:42 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/27 11:05:00 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e) {
        ;
    }
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (std::exception &e) {
        ;
    }
    try
    {
        dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::exception &e) {
        ;
    }
}

Base * generate(void) {
    srand(time(NULL));
    switch (rand() % 3)
    {
    case 0:
        return (new A());
    case 1:
        return (new B());
    case 2:
        return (new C());
    }
    return NULL;
}

int main() {
    Base *start;
    start = generate();
    identify(start);
    identify(*start);
    delete start;
    return 1;
}