/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:46:50 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/12/17 20:59:18 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class rectangle
{
    private:
        float lenght;
        float widht;
    public:
        void set_lenght(float l)
        {
            if(l >= 0)
                lenght = l;
            else
                std::cout<<"Error , please enter only poitive values" << std::endl;    
        }
        float get_lenght()
        {
            return (lenght);
        }

        void set_widht(float w)
        {
            if(w >= 0)
                widht = w;
            else
                std::cout<<"Error , please enter only poitive values" << std::endl;    
        }
        float get_widht()
        {
            return (widht);
        }

        float GetArea()
        {
            return(lenght * widht);
        }
};

int main()
{
    rectangle haitam;
    haitam.set_lenght(40.5);
    haitam.set_widht(30.6);
    std::cout << "The rectangle area is " << haitam.GetArea() << std::endl;
    return(0);
}