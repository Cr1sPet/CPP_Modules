//
// Created by serj on 08.07.22.
//

#ifndef CPP_MODULES_CONVERTER_H
#define CPP_MODULES_CONVERTER_H


#include <iostream>
#include <string>
#include <sstream>
#include "AMyType.h"
#include "MyDouble.h"
#include "MyInteger.h"
#include "MyChar.h"
#include "MyFloat.h"

class Converter {

private:

    std::string pure;

    AMyType **myType;

    AMyType *mainType;

    void defineType();


public:

    std::string type;

    Converter( std::string pure );

    ~Converter();
    Converter & operator = ( const Converter & );
    Converter ( const Converter & );
    Converter( );


    void printChar();
    void printInteger();
    void printFloat();
    void printDouble();
    void print();

};


#endif //CPP_MODULES_CONVERTER_H

