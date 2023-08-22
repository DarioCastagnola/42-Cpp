/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:32:45 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/22 10:29:52 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class Contact;

class PhoneBook
{
    public:
        PhoneBook();
        void    add();
        void    search();
    private:
        Contact user[8];
        int     index;
};