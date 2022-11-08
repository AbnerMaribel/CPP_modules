#include "Contact.hpp"

Contact::Contact() {
    return;
}

Contact::~Contact() {
    return;
}


std::string Contact::getIndex() {
    return this->index;
}
void Contact::setIndex(std::string index) {
    this->index = index;
    return;
}


std::string Contact::getFirstName() {
    return this->firstName;
}
void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
    return;
}


std::string Contact::getLastName() {
    return this->lastName;
}
void Contact::setLastName(std::string lastName) {
    this->lastName = lastName;
    return;
}


std::string Contact::getNickname() {
    return this->nickname;
}
void Contact::setNickname(std::string nickname) {
    this->nickname = nickname;
    return;
}


std::string Contact::getPhoneNumber() {
    return this->phoneNumber;
}
void Contact::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
    return;
}

std::string Contact::getDarkestSecret() {
    return this->darkestSecret;
}
void Contact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
}