/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmani <mrahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 20:45:40 by mrahmani          #+#    #+#             */
/*   Updated: 2022/03/18 23:14:49 by mrahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>
#include <string.h>

class Contact
{
private:
    std::string first_name;
    std::string phone_number;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;

public:
    int index;
    std::string get_firstname();
    std::string get_lastname();
    std::string get_nickname();
    std::string get_phonenbr();
    std::string get_darkestSecret();
    void set_firstname(std::string str);
    void set_lastname(std::string str);
    void set_nickname(std::string str);
    void set_phoneNbr(std::string str);
    void set_darkestSecret(std::string str);

    Contact();
};
#endif