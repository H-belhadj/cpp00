/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:30:41 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/17 22:06:16 by hbelhadj         ###   ########.fr       */
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
        static const size_t maxContacts = 8;
    
};

#endif