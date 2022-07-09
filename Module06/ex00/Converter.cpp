//
// Created by serj on 08.07.22.
//

#include "Converter.h"

Converter::Converter( std::string pure ) {
    this->pure = pure;

    myType = new AMyType*[4];
    myType[0] = new MyInteger();
    myType[1] = new MyChar();
    myType[2] = new MyFloat();
    myType[3] = new MyDouble();

    this->type = "undefined";
    mainType = NULL;

    defineType();
}

void Converter::defineType() {

    for (int i = 0; i < 4; i++) {
        try {
            myType[i]->parseString(this->pure);
            mainType = myType[i];
            this->type = myType[i]->getType();
            return;
        } catch ( AMyType::StringParseFailureException &e ) {

        }

    }

}

/*
 * Canonical form
 */

Converter::Converter() {

    this->pure = "undefined";

    myType = new AMyType*[4];
    myType[0] = new MyInteger();
    myType[1] = new MyChar();
    myType[2] = new MyFloat();
    myType[3] = new MyDouble();

    this->type = "undefined";
    mainType = NULL;

    defineType();

}


Converter & Converter::operator = (const Converter &converter) {


    if (this != &converter) {

        if (this->mainType != NULL && this->type == "undefined") {
            delete this->mainType;
        }
        if (converter.mainType != NULL) {
            this->mainType = converter.mainType;
        } else {
            this->mainType = NULL;
        }

        this->type = converter.type;
        this->pure = converter.pure;

        for (int i = 0; i < 4; i++) {
            delete myType[i];
        }

        for (int i = 0; i < 4; i++) {
            this->myType[i] = converter.myType[i]->clone();
        }
    }

//    std::cout << "Assignment operator Bureaucrat" << std::endl;

    return *this;
}

Converter::Converter ( const Converter & converter ){

    this->pure = pure;

    myType = new AMyType*[4];

    for (int i = 0; i < 4; i++) {
        this->myType[i] = converter.myType[i]->clone();
    }

    this->type = "undefined";
    mainType = NULL;

}


Converter::~Converter() {

    for (int i = 0; i < 4; i++) {
        delete myType[i];
    }
    delete []myType;
    if (type == "undefined")
        delete mainType;
}


void Converter::print() {

    if (NULL == mainType) {
        mainType = new MyInteger("impossible");
    }

    mainType->printChar();
    mainType->printInteger();
    mainType->printDouble();
    mainType->printFloat();
}
