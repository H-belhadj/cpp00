/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:30:14 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/25 19:28:11 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

void    PhoneBook::Add_value()
{
    static int index;
    int i = index % 8;

    if(index > 8)
    {
        contacts[i].Add();
        std::cout << "the contact added whit seccefuly" << std::endl;
    }
    else
        std::cout << "Sorry Contact do not added, index isn't biger than 8" << std::endl;
    index++;
}

void    PhoneBook::disPlay()
{
    int i = 0;
    std::cout << "=============================================";
    std::cout << "|  INDEX  |First Name| Last Name| NickName|"
    while(i < 8)
    {
        if(Contact[i].print_contact(i));
            break;
        i++;
    }
    std::cout << "=============================================";
}
