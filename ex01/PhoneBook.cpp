/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:30:14 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/20 10:06:17 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// int PhoneBook::Add_value()
// {
//     std::string First_Name;
//     std::cout << "Enter First Name" << std::endl;
//     std::cin >> First_Name;
//     std::string Last_Name;
//     std::cout << "Enter Last Name" << std::endl;
//     std::cin >> Last_Name;
//     std::string Nickname;
//     std::cout << "Enter Nickname" << std::endl;
//     std::cin >> Nickname;
//     std::string Phone_Number;
//     std::cout << "Enter Phone Number" << std::endl;
//     std::cin >> Phone_Number;
//     std::string Darkest_Secret;
//     std::cout << "Enter Darkest Secret" << std::endl;
//     std::cin >> Darkest_Secret;
//     re
        
// }

std::string PhoneBook::comenzar(std::string str)
{
    std::string adentro = "";
    //printf the table;
    while(adentro.compare("EXIT"))
    {
        std::cout << ">>";
        std::getline(std::cin, adentro);
        if(std::cin.eof)
            break;
        
    }
}