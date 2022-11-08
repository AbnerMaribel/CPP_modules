#include "Harl.hpp"

void Harl::debug() {
    std::cout << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup burger. "
                 "I really do!" << std::endl;
    return;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. "
                 "You didn’t put enough bacon in my burger! If you did, "
                 "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. "
                 "I’ve been coming for years whereas you started working here "
                 "since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the "
                 "manager now." << std::endl;
}



void Harl::complain(std::string level) {
    void (Harl::*funcPtrArr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levelArr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
//    int index = 0;
//    if (levelArr->find(level) == -1){
//        std::cout << "Not found\n";
//        return;
//    }
//    for(;index < 4 && levelArr[index] != level; index++);
//    if(index == 4)
//        std::cout
//    (this->*funcPtrArr[index])();
    for(int i = 0; i < 4; i++) {
        if(level == levelArr[i]) {
            (this->*funcPtrArr[i])();
        }
    }
    return;
}

Harl::Harl() {
    return;
}

Harl::~Harl() {
    return;
}