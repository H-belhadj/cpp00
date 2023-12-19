/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:33:23 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/20 00:15:40 by hbelhadj         ###   ########.fr       */
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
        Contact();
        ~Contact();
        void            Add();
        std::string     getName(std::string name);
        std::string     getIn(std::string str);
        bool            isName(std::string adentro);
        std::string     getPhone(std::string phone);
        bool            isPhone(std::string adentro);



        
};

#endif