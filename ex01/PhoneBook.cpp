/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:30:14 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/20 13:00:58 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

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

void PhoneBook::disPlay()
{
    std::cout << "|" << std::setw(10) << "index" ;
    std::cout << "|" << std::setw(10) << "First_Name" ;
    std::cout << "|" << std::setw(10) << "Last_Name" ;
    std::cout << "|" << std::setw(10) << "Nickname" << "|" <<  std::endl;
}

// void    PhoneBook::Search_calue()
// {
//     std::cout << "|" << std::setw(10) << "ab" << std::endl;
    
    
// }