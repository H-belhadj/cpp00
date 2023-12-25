#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>

int main()
{
    std::string cmd;
    PhoneBook phonebook;
    Contact Contact;
    while(1)
    {
        std::cout << "Enter a Command a Primo [ADD, SEARCH, EXIT] >>>>> ";

        std::getline(std::cin, cmd);
        if(std::cin.eof())
        {
            std::cout << std::endl;
            exit(0);
        }
        if(cmd == "EXIT")
            exit(0);
        else if(cmd == "ADD")
            Contact.Add();
        else
            std::cout << "Dor ghayrha ma3adnachi hadchi" << std::endl;
        
    }
    return (0);
    // exit(0);
    // while(std::getline(std::cin ,tefa7i))
    // {
    //     if (tefa7i == "EXIT")
    //         exit(0);
    //     else if(tefa7i == "ADD")
    //         C.Add();
    //         //
    //     // else if(tefa7i == "SEARCH")
    //         //
    //     // std::cout << tefa7i << std::endl;
    // }
    // v.disPlay();
    // return(0);
}