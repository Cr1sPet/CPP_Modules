//
// Created by serj on 09.07.22.
//

#include "MyChar.h"


MyChar::MyChar(char value) {
    this->value = value;
    this->type = "MyChar";
    stringRepresentation = "";
}

MyChar::MyChar( std::string message ) {
    this->type = "MyChar";
    stringRepresentation = message;
}

MyChar::MyChar() {
    this->type = "MyChar";
    stringRepresentation = "";
}

/*
 * Canonical
 */



MyChar & MyChar::operator = (const MyChar &myChar) {

    if (this != &myChar) {
//        this->name = bureaucrat.name;
        this->value = myChar.value;
        this->stringRepresentation = myChar.stringRepresentation;
    }

//    std::cout << "Assignment operator Bureaucrat" << std::endl;

    return *this;
}

MyChar::MyChar ( const MyChar & myChar ) {

    *this = myChar;

}


MyChar::~MyChar() {

}


MyChar *MyChar::clone() const {

    return new MyChar(*this);

}

/*
 * Logic
 */

void MyChar::parseString( std::string input) {
    char charValue;
    std::stringstream converter( input );

    converter >> charValue;

    if ( converter.fail() || (int)input.length() > 1) {
        throw AMyType::StringParseFailureException();
    }
    this->value = charValue;

}

void MyChar::print() {
    std::cout << "char: ";
    if (!stringRepresentation.empty()) {
        std::cout << stringRepresentation << std::endl;
    } else {
        std::cout <<"\'" << value << "\'" << std::endl;
    }
}



void MyChar::printInteger() {
    this->toInteger().print();
}

MyDouble MyChar::toDouble() {

    return MyDouble(static_cast<double>(this->value));

}

MyFloat MyChar::toFloat() {


    return MyFloat(static_cast<float>(this->value));

}

MyInteger MyChar::toInteger() {

    return MyInteger(static_cast<int>(this->value));

}

void MyChar::printDouble() {

    this->toDouble().print();

}

void MyChar::printChar() {

    this->print();

}

void MyChar::printFloat() {

    this->toFloat().print();

}