#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"


#include <iostream>
#include <iomanip>

class PhoneBook
{
private:
    int count;
    Contact contacts [8];
    void printBanner();
    void printContacts();
    void printContact(int index);
public:
    PhoneBook();
    ~PhoneBook();
    void add();
    void search();

};

#endif