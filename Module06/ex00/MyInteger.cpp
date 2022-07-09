//
// Created by serj on 09.07.22.
//

#include "MyInteger.h"

MyInteger::MyInteger() {
    this->type = "MyInteger";
    stringRepresentation = "";
}

MyInteger::MyInteger(std::string message) {
    this->type = "MyInteger";
    stringRepresentation = message;
}

MyInteger::MyInteger( int value ) {
    this->type = "MyInteger";
    stringRepresentation = "";
    this->value = value;
}

/*
 * Canonical
 */


MyInteger & MyInteger::operator = (const MyInteger &myInteger) {

    if (this != &myInteger) {
//        this->name = bureaucrat.name;
        this->value = myInteger.value;
        this->stringRepresentation = myInteger.stringRepresentation;
    }

//    std::cout << "Assignment operator Bureaucrat" << std::endl;

    return *this;
}

MyInteger::MyInteger ( const MyInteger & myInteger ) {

    *this = myInteger;

}


MyInteger::~MyInteger() {

}

MyInteger *MyInteger::clone() const {

    return new MyInteger(*this);

}

/*
 * Logic
 */

void MyInteger::parseString( std::string input) {
    int intValue;
    std::stringstream converter( input );

    converter >> intValue;

    if ( converter.fail() || !converter.eof() ) {
        throw MyInteger::StringParseFailureException();
    }
    this->value = intValue;
}

void MyInteger::print() {
    std::cout << "int: ";
    if (!stringRepresentation.empty()) {
        std::cout << stringRepresentation << std::endl;
    } else {
        std::cout << value << std::endl;
    }
}

void MyInteger::printInteger() {
    this->print();
}

MyDouble MyInteger::toDouble() {

    if (this->stringRepresentation == "impossible") {
        return MyDouble(stringRepresentation);
    }

    return MyDouble(static_cast<double>(this->value));

}

MyFloat MyInteger::toFloat() {

    if (this->stringRepresentation == "impossible") {
        return MyFloat(stringRepresentation);
    }

    return MyFloat(static_cast<float>(this->value));

}

MyChar MyInteger::toChar() {

    if (this->stringRepresentation == "impossible") {
        return MyChar(stringRepresentation);
    }

    char ch = static_cast<char>(this->value);
    if (std::isprint(ch)) {
        return MyChar(ch);
    } else {
        return MyChar("Non displayable");
    }

}

void MyInteger::printDouble() {

    this->toDouble().print();

}

void MyInteger::printChar() {

    this->toChar().print();

}

void MyInteger::printFloat() {

    this->toFloat().print();

}