/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmani <mrahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:52:39 by mrahmani          #+#    #+#             */
/*   Updated: 2022/04/01 10:35:45 by mrahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.Class.hpp"
#include "Contact.Class.hpp"
#include <algorithm>

Phonebook::Phonebook(void)
{
    this->count = 0;
    return;
}

void Phonebook::print_contact(int i)
{
    std::cout << "first name: " << this->contacts[i].get_firstname() << std::endl;
    std::cout << "last name: " << this->contacts[i].get_lastname() << std::endl;
    std::cout << "nickname: " << this->contacts[i].get_nickname() << std::endl;
    std::cout << "darkest secret: " << this->contacts[i].get_darkestSecret() << std::endl;
    std::cout << "phone number: " << this->contacts[i].get_phonenbr() << std::endl;
    i++;
}

int Phonebook::get_oldlest()
{
    int i = 0;
    int tmp;

    if (this->count == 0)
        return 0;
    tmp = this->contacts[0].index;
    while (i < 8)
    {
        if (this->contacts[i].index < tmp)
            tmp = this->contacts[i].index;
        i++;
    }
    return tmp;
}

Phonebook::~Phonebook(void)
{
    return;
}

bool isNumber(const std::string& str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void Phonebook::add_contact()
{
    Contact contact;
    std::string tmp;

    if (this->count == 8)
        this->count = this->get_oldlest();
    contact.index = this->count;
    std::cout << "enter a first name" << std::endl;
    std::cin >> tmp;
    contact.set_firstname(tmp);
    std::cout << "enter a last name" << std::endl;
    std::cin >> tmp;
    contact.set_lastname(tmp);
    std::cout << "enter nickname" << std::endl;
    std::cin >> tmp;
    contact.set_nickname(tmp);
    std::cout << "enter a phone number" << std::endl;
    std::cin >> tmp;
    while (!isNumber(tmp))
    {
        std::cout << "phone number must be a 7 digit" << std::endl;
        std::cin >> tmp;
    }
    contact.set_phoneNbr(tmp);
    std::cout << "enter a darkest secret" << std::endl;
    std::cin >> tmp;
    contact.set_darkestSecret(tmp);
    this->contacts[this->count] = contact;
    this->count = this->count + 1;
}

void Phonebook::print_str(std::string str)
{
    size_t len;
    int size;

    len = str.length();
    size = 10 - len;
    if (len <= 10)
    {
        while (size > 0)
        {
            std::cout << " ";
            size--;
        }
        std::cout << str;
    }
    else if (len > 10)
    {
        str[9] = '.';
        size = 0;
        while (size <= 9)
        {
            std::cout << str[size];
            size++;
        }
    }
    std::cout << "|";
}

void print_header()
{
    Phonebook book;

    std::cout << "*********************************************";
    std::cout << std::endl;
    std::cout << "|";
    book.print_str("index");
    book.print_str("first name");
    book.print_str("last name");
    book.print_str("nickname");
    std::cout << std::endl;
    std::cout << "*********************************************";
    std::cout << std::endl;
}

void Phonebook::search_contacts()
{
    int i;
    int index;

    index = -1;
    i = 0;
    print_header();
    while (i < this->count)
    {
        std::cout << "|         " << this->contacts[i].index << "|";
        this->print_str(this->contacts[i].get_firstname());
        this->print_str(this->contacts[i].get_lastname());
        this->print_str(this->contacts[i].get_nickname());
        std::cout << std::endl;
        i++;
    }
    if (this->count > 0)
    {
        std::cout << "Enter the index of contact > ";
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cout << "Invlid index" << std::endl;
            return;
        }
        if (check_index(index) == 0)
        {
            std::cout << "contact not fount" << std::endl;
        }
        else if (check_index(index) == 1)
            print_contact(index);
    }
}
int Phonebook::check_index(int index_)
{
    int i;

    i = 0;
    if (index_ < 0 || index_ > 7)
        return 0;
    while (i < this->count)
    {
        if (this->contacts[i].index == index_)
            return (1);
        i++;
    }
    return (0);
}
