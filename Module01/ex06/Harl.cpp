
#include "Harl.hpp"
#include <iostream>
#include <string>




void Harl::debug() {
    std::cout << "[DEBUG]. I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"\
            << "ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "[INFO]. I cannot believe adding extra bacon costs more money. You didn’t put"\
            << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "[WARNING]. I think I deserve to have some extra bacon for free. I’ve been coming for"\
                << "years whereas you started working here since last month." << std::endl;
}


void Harl::error() {
    std::cout << "[ERROR]. This is unacceptable! I want to speak to the manager now." << std::endl;
}

int findIndex(std::string level) {
    std::string types [4];

    types[0] = "debug";
    types[1] = "info";
    types[2] = "warning";
    types[3] = "error";

    for (int i = 0; i < 4; i++) {
        if (0 == types[i].compare(level)) {
            return i;
        }
    }
    return -1;
}


void Harl::complain ( std::string level ) {

    void (Harl::*funs_arr[])(void) = {&Harl::debug,
                            &Harl::info,
                            &Harl::warning,
                            &Harl::error};

    int filter = findIndex(level);

    if (-1 == filter) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    } else {
        for (int i = filter; i < 4; i++) {
        (this->*funs_arr[i])();
    }
    }
}
