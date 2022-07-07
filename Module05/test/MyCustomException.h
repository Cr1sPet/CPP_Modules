//
// Created by Josue Chopped on 7/7/22.
//

#ifndef CPP_MYCUSTOMEXCEPTION_H
#define CPP_MYCUSTOMEXCEPTION_H


#include <iostream>
using namespace std;

class MyCustomException : public std::exception {
private:
    char * message;

public:
    MyCustomException(char * msg) : message(msg) {}
     char * what () {
        return message;
    }
};

#endif //CPP_MYCUSTOMEXCEPTION_H
