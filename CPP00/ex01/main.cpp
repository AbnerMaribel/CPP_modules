#include <iostream>
#include "PhoneBook.hpp"

int main(void) {
    PhoneBook phoneBook;
    std::string input;
    while (true) {
        std::cout << "Enter the command: ADD, SEARCH or EXIT" << std::endl;
        std::cin >> input;

        if(input == "EXIT")
            break;
        else if(input == "ADD")
            phoneBook.add();
        else if(input == "SEARCH")
            phoneBook.search();
        else
            std::cout << "Wrong input" << std::endl;
    }
    return 0;
};

