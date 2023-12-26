/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:30:41 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/25 23:59:06 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iomanip>
#include <iostream>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact  contacts[8];
        // int index;
        // static const size_t maxContacts = 8;
    public:
        PhoneBook(){}
        ~PhoneBook(){}
void    Add_value();
        void disPlay();
        int     give_idx();
        void    search();
        // void Search_calue();//two steps step1: "print information in table" and step 2 "get_index"
};

#endif
