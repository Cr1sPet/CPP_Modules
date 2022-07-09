//
// Created by serj on 09.07.22.
//

#ifndef CPP_MODULES_MYCHAR_H
#define CPP_MODULES_MYCHAR_H

#include "AMyType.h"
#include <iostream>
#include <string>
#include <sstream>
#include "MyFloat.h"
#include "MyInteger.h"
#include "MyDouble.h"

class AMyType;
class MyInteger;
class MyFloat;
class MyDouble;


class MyChar : public AMyType {

    char value;


public:


    MyChar( char value );
    MyChar( std::string message );

    MyChar ();
    MyChar & operator = ( const MyChar & );
    MyChar ( const MyChar & );
    ~MyChar ();

    void parseString( std::string input);
    void print();

    void printInteger();
    void printDouble();
    void printChar();
    void printFloat();

    virtual MyChar * clone() const ;


    MyInteger toInteger();
    MyFloat toFloat();
    MyDouble toDouble();

};


#endif //CPP_MODULES_MYCHAR_H
