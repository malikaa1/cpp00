/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmani <mrahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:59:33 by mrahmani          #+#    #+#             */
/*   Updated: 2022/04/02 16:12:15 by mrahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <iostream>
#include <string.h>
#include<limits>
#include "Contact.Class.hpp"

class Phonebook
{
private:
    int count;
public:
    Phonebook();
    ~Phonebook();
    Contact contacts[8];
    void create_contact(void);
    void print_str(std::string str);
    void search_contacts();
    void print_contact(int index);
    int check_index(int index);
    void add_contact();
    int get_oldlest();
};
#endif
