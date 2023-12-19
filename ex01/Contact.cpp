/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:36:01 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/19 23:57:40 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

bool            Contact::isName(std::string adentro)
{
    int i = 0;
    while(adentro[i++])
        if(!isalpha(adentro[i]) && adentro[i] != ' ')
            return(0);
    return(1);
}

std::string     Contact::getIn(std::string str)
{
    std::string adentro = "";
    bool    valid = 0;
    while(valid == 0)
    {
        std::cout << name;
        std::getline(std::cin, adentro);
        if(std::cin.eof())
        {
            std::cout << "\nGOOD BYE\n";
            exit(0);
        }
        if(std::cin.good() && !adentro.empty())
            valid = 1;
        else
        {
            std::cin.clear();
            std::cout << "Invalid Name...\n";
        }
    }
    return (adentro);
}

std::string     Contact::getName(std::string name)
{
    std::string adentro = "";
    bool    valid = 0;
    while(valid == 0)
    {
        std::cout << name;
        std::getline(std::cin, adentro);
        if(std::cin.eof())
        {
            std::cout << "\nGOOD BYE\n";
            exit(0);
        }
        if(std::cin.good() && !adentro.empty() && this->isName(adentro))
            valid = 1;
        else
        {
            std::cin.clear();
            std::cout << "Invalid Name...\n";
        }
    }
    return (adentro);
}

void    Contact::Add(std::string str)
{
    std::cout << "------------------- NEW CONTACT------------";
    this->First_Name = getName("First_Name\t"); 
    this->Last_Name = getName("Last_Name\t"); 
    this->Nickname = getIn("Nickname\t"); 
    this->Phone_Number = getPhone("Phone_Number\t"); 
    this->Darkest_Secret = getIn("Darkest_Secret\t"); 
    std::cout << "-------------------------------------------";
}