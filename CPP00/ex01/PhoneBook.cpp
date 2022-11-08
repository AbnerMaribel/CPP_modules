#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    this->count = 0;
    return;
}

PhoneBook::~PhoneBook() {
    return;
}

void PhoneBook::add() {
    std::string str;

    if(this->count == 8)
        this->count = 7;

    this->contacts[this->count].setIndex(std::to_string(this->count + 1));

    std::cout << "Enter first name" << std::endl;
    std::cin >> str;
    this->contacts[this->count].setFirstName(str);

    std::cout << "Enter last name" << std::endl;
    std::cin >> str;
    this->contacts[this->count].setLastName(str);

    std::cout << "Enter nickname" << std::endl;
    std::cin >> str;
    this->contacts[this->count].setNickname(str);

    std::cout << "Enter phone number" << std::endl;
    std::cin >> str;
    this->contacts[this->count].setPhoneNumber(str);

    std::cout << "Enter darkest secret" << std::endl;
    std::cin >> str;
    this->contacts[this->count].setDarkestSecret(str);

    std::cout << "Contact added to the phonebook" << std::endl;

    this->count += 1;
    return;
}

void PhoneBook::printBanner() {
    std::cout << "|" << std::setw(10) << "index" << "|"
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nickname" << "|"
              << std::endl;
}

void PhoneBook::printContacts() {
    for(int i = 0; i < this->count; i++) {
        if (this->contacts[i].getIndex().length() <= 10)
            std::cout << "|" << std::setw(10) << this->contacts[i].getIndex() << "|";
        else
            std::cout << "|" << std::setw(10) << this->contacts[i].getIndex().substr(0, 9) + "." << "|";

        if (this->contacts[i].getFirstName().length() <= 10)
            std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|";
        else
            std::cout << std::setw(10) << this->contacts[i].getFirstName().substr(0, 9) + "." << "|";

        if (this->contacts[i].getLastName().length() <= 10)
            std::cout << std::setw(10) << this->contacts[i].getLastName() << "|";
        else
            std::cout << std::setw(10) << this->contacts[i].getLastName().substr(0, 9) + "." << "|";

        if (this->contacts[i].getNickname().length() <= 10)
            std::cout << std::setw(10) << this->contacts[i].getNickname() << "|";
        else
            std::cout << std::setw(10) << this->contacts[i].getNickname().substr(0, 9) + "." << "|";

        std::cout << std::endl;
    }
}

void PhoneBook::printContact(int index) {

    std::cout << "First name: " << this->contacts[index - 1].getFirstName() << std::endl;
    std::cout << "Last name: " << this->contacts[index - 1].getLastName() << std::endl;
    std::cout << "Nickname: " << this->contacts[index - 1].getNickname() << std::endl;
    std::cout << "Phone number: " << this->contacts[index - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << this->contacts[index - 1].getDarkestSecret() << std::endl;
    return;
}

int isNumber(std::string str) {
    bool res = 0;
    int  i = 0;
    if(str[i] == '-')
        i++;
    while(str[i]) {
        if(!isdigit(str[i])) {
            res = 1;
            break;
        }
        i++;
    }
    return res;
}

void PhoneBook::search() {
    std::string str;
    int index;
    this->printBanner();
    this->printContacts();
    if(this->count == 0)
        std::cout << "Phone book is empty" << std::endl;
    else {
        while(true) {
           std::cout << "Enter index to display" << std::endl;
           std::cin >> str;
           if(isNumber(str))
               std::cout << "Wrong input" << std::endl;
           else {
               index = std::stoi(str);
               if (index <= 0 || index > this->count)
                   std::cout << "Wrong index" << std::endl;
               else {
                   for (int i = 0; i < this->count; i++)
                       if (this->contacts[i].getIndex() == std::to_string(index))
                           this->printContact(index);
                   break;
               }
           }
       }
    }
    return;
}

