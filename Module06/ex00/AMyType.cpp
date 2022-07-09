//
// Created by serj on 09.07.22.
//

#include "AMyType.h"

AMyType::AMyType() {

}

AMyType::~AMyType() {

};


const char * AMyType::StringParseFailureException::what () const throw() {
    return (char *) "Caught StringParseFailureException\n";
}


std::string AMyType::getType() const {
    return type;
}


void AMyType::setStringRepresentation(const std::string stringRepres ) {
    this->stringRepresentation = stringRepres;
}