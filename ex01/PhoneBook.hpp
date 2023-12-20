/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:30:41 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/20 09:57:51 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#   define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact  contact[8];
        int index;
        static const size_t maxContacts = 8;
    public:
        PhoneBook();
        ~PhoneBook();
        int Add_value();//read from the terminal when i do add and stored in the contact
        void Search_calue();//two steps step1: "print information in table" and step 2 "get_index"
};

#endif
