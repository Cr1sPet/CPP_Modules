//
// Created by serj on 09.07.22.
//



#ifndef CPP_MODULES_MYINTEGER_H
#define CPP_MODULES_MYINTEGER_H

#include "AMyType.h"
#include <iostream>
#include <string>
#include <sstream>
#include "MyDouble.h"
#include "MyChar.h"
#include "MyFloat.h"

class AMyType;
class MyDouble;
class MyFloat;
class MyChar;


class MyInteger : public AMyType {

private:


public:

    int value;

    MyInteger( std::string message);
    MyInteger( int );

    MyInteger();
    MyInteger & operator = ( const MyInteger & );
    MyInteger ( const MyInteger & );
    ~MyInteger();

    void parseString( std::string input);
    void print();

    void printDouble();
    void printInteger();
    void printFloat();
    void printChar();

    MyDouble toDouble();
    MyFloat toFloat();
    MyChar toChar();

    virtual MyInteger * clone() const ;

    int getValue() const {
        return value;
    }

};


#endif //CPP_MODULES_MYINTEGER_H
