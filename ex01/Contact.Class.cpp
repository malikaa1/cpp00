/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmani <mrahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:25:10 by mrahmani          #+#    #+#             */
/*   Updated: 2022/03/18 23:17:39 by mrahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact()
{
    this->index = 0;
}

std::string Contact::get_firstname()
{
    return this->first_name;
}

void Contact::set_firstname(std::string str)
{
    this->first_name = str;
}

std::string Contact::get_lastname()
{
    return this->last_name;
}

void Contact::set_lastname(std::string str)
{
    this->last_name = str;
}
std::string Contact::get_nickname()
{
    return this->nickname;
}

void Contact::set_nickname(std::string str)
{
    this->nickname = str;
}
std::string Contact::get_phonenbr()
{
    return this->phone_number;
}

void Contact::set_phoneNbr(std::string str)
{
    this->phone_number = str;
}

std::string Contact::get_darkestSecret()
{
    return this->darkest_secret;
}

void Contact::set_darkestSecret(std::string str)
{
    this->darkest_secret = str;
}