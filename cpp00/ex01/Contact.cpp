/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:21:44 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/21 16:36:29 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFname(void)
{
    return this->fname;
}

std::string Contact::getLname(void)
{
    return this->lname;
}

std::string Contact::getNname(void)
{
    return this->nickname;
}

std::string Contact::getPnum(void)
{
    return this->phonenumber;
}

std::string Contact::getDs(void)
{
    return this->darkestsecret;
}

void    Contact::setFname(std::string str)
{
    this->fname = str;
}

void    Contact::setLname(std::string str)
{
    this->lname = str;
}

void    Contact::setNname(std::string str)
{
    this->nickname = str;
}

void    Contact::setPnum(std::string str)
{
    this->phonenumber = str;
}

void    Contact::setDs(std::string str)
{
    this->darkestsecret = str;
}