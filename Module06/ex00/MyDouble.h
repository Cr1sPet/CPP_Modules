//
// Created by serj on 09.07.22.
//

#ifndef CPP_MODULES_MYDOUBLE_H
#define CPP_MODULES_MYDOUBLE_H

#include "AMyType.h"
#include <iostream>
#include <string>
#include <sstream>
#include "MyFloat.h"
#include "MyInteger.h"
#include "MyChar.h"

class AMyType;
class MyInteger;
class MyFloat;
class MyChar;

class MyDouble : public AMyType {

private:

    double value;

public:

    MyDouble( double value );

    MyDouble( std::string message );

    MyDouble ();
    MyDouble & operator = ( const MyDouble & );
    MyDouble ( const MyDouble & );
    ~MyDouble();

    void parseString( std::string input);
    void print();

    double getValue() const {
        return value;
    }

    void printInteger();
    void printDouble();
    void printChar();
    void printFloat();

    bool checkSpecial(std::string);

    virtual MyDouble * clone() const ;


    MyInteger toInteger();
    MyFloat toFloat();
    MyChar toChar();

};


#endif //CPP_MODULES_MYDOUBLE_H
