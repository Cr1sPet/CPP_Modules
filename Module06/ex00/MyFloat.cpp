//
// Created by serj on 09.07.22.
//

#include "MyFloat.h"


MyFloat::MyFloat(float value) {
    this->type = "MyFloat";
    stringRepresentation = "";
    this->value = value;
}

MyFloat::MyFloat(std::string message) {
    this->type = "MyFloat";
    stringRepresentation = message;
}

MyFloat::MyFloat() {
    this->type = "MyFloat";
    stringRepresentation = "";
}

/*
 * Canonical
 */



MyFloat & MyFloat::operator = (const MyFloat &myFloat) {

    if (this != &myFloat) {
//        this->name = bureaucrat.name;
        this->value = myFloat.value;
        this->stringRepresentation = myFloat.stringRepresentation;
    }

//    std::cout << "Assignment operator Bureaucrat" << std::endl;

    return *this;
}

MyFloat::MyFloat ( const MyFloat & myFloat ) {

    *this = myFloat;

}

MyFloat::~MyFloat() {

}


MyFloat *MyFloat::clone() const {

    return new MyFloat(*this);

}

/*
 * Logic
 */


bool MyFloat::checkSpecial (std::string input) {

    std::string temp;

    std::stringstream converter( "+inff -inff nanf");
    while (!converter.eof()) {
        converter >> temp;
        if (0 == temp.compare(input)) {
            this->stringRepresentation = temp;
            return true;
        }
    }
    return false;
}

void MyFloat::parseString( std::string input) {

    float floatValue;

    if (MyFloat::checkSpecial(input)) {
        return ;
    };

    if (input[input.length() - 1 ] != 'f' || input.find_first_of('f') != input.find_last_of('f')) {
        throw AMyType::StringParseFailureException();
    }


    std::stringstream  converter(input.substr(0, input.length() - 1));
    converter >> floatValue;

    if ( converter.fail()) {

        throw AMyType::StringParseFailureException();
    }
    this->value = floatValue;
}

void MyFloat::print() {

    std::cout << "float: ";

    if (!stringRepresentation.empty()) {
        std::cout << stringRepresentation << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(1) << value << "f" << std::endl;
    }


}


MyInteger MyFloat::toInteger() {

    if (!this->stringRepresentation.empty()) {
        return MyInteger("impossible");
    }

    return MyInteger(static_cast<int>(this->value));
}


void MyFloat::printInteger() {
    this->toInteger().print();
}



MyDouble MyFloat::toDouble() {

    if (!this->stringRepresentation.empty()) {
        return MyDouble(this->stringRepresentation.substr(0, stringRepresentation.length() - 1));
    }

    return MyDouble(static_cast<float>(this->value));

}

MyChar MyFloat::toChar() {


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

void MyFloat::printFloat() {

    this->print();

}

void MyFloat::printChar() {

    this->toChar().print();

}

void MyFloat::printDouble() {

    this->toDouble().print();

}