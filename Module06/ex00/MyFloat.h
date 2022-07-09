//
// Created by serj on 09.07.22.
//

#ifndef CPP_MODULES_MYFLOAT_H
#define CPP_MODULES_MYFLOAT_H

#include "AMyType.h"
#include <iostream>
#include <string>
#include <sstream>
#include "MyDouble.h"
#include "MyInteger.h"
#include "MyChar.h"

class AMyType;
class MyDouble;
class MyInteger;
class MyChar;

class MyFloat : public AMyType{


private:


public:

    float value;

    MyFloat( float value );

    MyFloat( std::string message );

    MyFloat ();
    MyFloat & operator = ( const MyFloat & );
    MyFloat ( const MyFloat & );
    ~MyFloat();

    void parseString( std::string input);
    void print();


    float getValue() const {
        return value;
    }

    void printInteger();
    void printDouble();
    void printChar();
    void printFloat();

    virtual MyFloat * clone() const ;


    MyDouble toDouble();
    MyInteger toInteger();
    MyChar toChar();

};


#endif //CPP_MODULES_MYFLOAT_H
