#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

int main()
{
    Contact C;
    PhoneBook v;
    std::string tefa7i;

    // // int index;
    // std::string First_Name;
    // std::string Last_Name;
    // std::string Nickname;
    // std::cout << "Enter a Index Number : ";
    // std::cin >> index;
    // std::cout << "Enter a First_Name   : ";
    // std::cin >> First_Name;
    // std::cout << "Enter a Last_Name    : ";
    // std::cin >> Last_Name;
    // std::cout << "Enter a Nickname     : ";
    // std::cin >> Nickname;
    // std::cout << "|" << std::setw(10) << index ;
    // std::cout << "|" << std::setw(10) << First_Name ;
    // std::cout << "|" << std::setw(10) << Last_Name ;
    // std::cout << "|" << std::setw(10) << Nickname << "|" <<  std::endl;


    // exit(0);
    while(std::getline(std::cin ,tefa7i))
    {
        if (tefa7i == "EXIT")
            exit(0);
        else if(tefa7i == "ADD")
            C.Add();
            //
        // else if(tefa7i == "SEARCH")
            //
        // std::cout << tefa7i << std::endl;
    }
    v.disPlay();
    return(0);
}