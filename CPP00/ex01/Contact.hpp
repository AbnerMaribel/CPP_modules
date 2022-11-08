#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
private:
    std::string index;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    std::string getIndex();
    void setIndex(std::string index);

    std::string getFirstName();
    void setFirstName(std::string firstName);

    std::string getLastName();
    void setLastName(std::string lastName);

    std::string getNickname();
    void setNickname(std::string nickname);

    std::string getPhoneNumber();
    void setPhoneNumber(std::string phoneNumber);

    std::string getDarkestSecret();
    void setDarkestSecret(std::string darkestSecret);

    Contact();
    ~Contact();
};


#endif