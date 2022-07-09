//
// Created by serj on 09.07.22.
//

#ifndef CPP_MODULES_AMYTYPE_H
#define CPP_MODULES_AMYTYPE_H

#include <iostream>
#include <string>
#include <iomanip>
class AMyType {

protected:

    std::string type;
    std::string stringRepresentation;

public:

    AMyType();
    virtual ~AMyType();

    virtual void parseString( std::string input) = 0;

    virtual void print() = 0;

    std::string getType() const;

    class StringParseFailureException : public std::exception {
    public:
        const char * what () const throw();
    };

    void setStringRepresentation( const std::string );

    virtual void printInteger() = 0;
    virtual void printDouble() = 0;
    virtual void printChar() = 0;
    virtual void printFloat() = 0;
    virtual AMyType *clone() const = 0;



};


#endif //CPP_MODULES_AMYTYPE_H
