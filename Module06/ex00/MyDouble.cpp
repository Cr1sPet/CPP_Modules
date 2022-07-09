//
// Created by serj on 09.07.22.
//

#include "MyDouble.h"

MyDouble::MyDouble() {
    this->type = "MyDouble";
    stringRepresentation = "";
}

MyDouble::MyDouble( std::string message) {
    this->type = "MyDouble";
    stringRepresentation = message;
}


MyDouble::MyDouble( double value) {
    this->type = "MyDouble";
    stringRepresentation = "";
    this->value = value;
}

/*
 * Canonical
 */



MyDouble & MyDouble::operator = (const MyDouble &myDouble) {

    if (this != &myDouble) {
//        this->name = bureaucrat.name;
        this->value = myDouble.value;
        this->stringRepresentation = myDouble.stringRepresentation;
    }

//    std::cout << "Assignment operator Bureaucrat" << std::endl;

    return *this;
}

MyDouble::MyDouble ( const MyDouble & myDouble ) {

    *this = myDouble;

}

MyDouble::~MyDouble() {

}


MyDouble *MyDouble::clone() const {

    return new MyDouble(*this);

}

/*
 * Logic
 */

void MyDouble::parseString( std::string input) {
    double doubleValue;
    std::string temp;

    std::stringstream converter( "+inf -inf nan");

    while (!converter.eof()) {
        converter >> temp;
        if (0 == temp.compare(input)) {
            this->stringRepresentation = temp;
            return;
        }
    }

    converter.str("");
    converter.clear();

    converter << input;
    converter >> doubleValue;

    if ( converter.fail() || !converter.eof()) {
        throw StringParseFailureException();
    }
    this->value = doubleValue;
}

void MyDouble::print() {
    std::cout << "double: ";
    if (!stringRepresentation.empty()) {
        std::cout << stringRepresentation << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) << value << std::endl;
    }
}

MyInteger MyDouble::toInteger() {

    if (!this->stringRepresentation.empty()) {
        return MyInteger("impossible");
    }

    return MyInteger(static_cast<int>(this->value));

}


void MyDouble::printInteger() {
    this->toInteger().print();
}



MyFloat MyDouble::toFloat() {

    if (!this->stringRepresentation.empty()) {
        return MyFloat(this->stringRepresentation + "f");
    }

    return MyFloat(static_cast<float>(this->value));

}

MyChar MyDouble::toChar() {


    if (!this->stringRepresentation.empty()) {
        return MyChar("impossible");
    }



    char ch = static_cast<char>(this->value);
    if (std::isprint(ch)) {
        return MyChar(ch);
    } else {
        return MyChar("Non displayable");
    }


}

void MyDouble::printDouble() {

    this->print();

}

void MyDouble::printChar() {

    this->toChar().print();

}

void MyDouble::printFloat() {

    this->toFloat().print();

}