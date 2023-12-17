/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:33:23 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/17 22:14:31 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#   define CONTACT_H

#include <iostream>

class Contact
{
    private:
        std::string  First_Name;
        std::string  Last_Name;
        std::string  Nickname;
        std::string  Phone_Number;
        std::string  Darkest_Secret;
    public:
    //Set up the values
        void Set_First_Name(std::string str)
        {
            First_Name = str;
        }
        void Set_Last_Name(std::string str)
        {
            Last_Name = str;
        }
        void Set_Nickname(std::string str)
        {
            Nickname = str;
        }
        void Set_Phone_Number(std::string str)
        {
            Phone_Number = str;
        }
        void Set_Darkest_Secret(std::string str)
        {
            Darkest_Secret = str;
        }
    //Get up the values
        std::string Get_First_Name()
        {
            return (First_Name);
        }
        std::string Get_Last_Name()
        {
            return (Last_Name);
        }
        std::string Get_Nickname()
        {
            return (Nickname);
        }
        std::string Get_Phone_Number()
        {
            return (Phone_Number);
        }
        std::string Get_Darkest_Secret()
        {
            return (Darkest_Secret);
        }
};

#endif