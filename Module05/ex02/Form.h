//
// Created by serj on 01.07.22.
//



#ifndef CPP_MODULES_FORM_H
#define CPP_MODULES_FORM_H

#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form {


private:

    const std::string name;
    bool sign;
    const int gradeToSign;
    const int gradeToExecute;

public:

    Form();
    Form & operator = ( const Form & );
    Form ( const Form & );
    ~Form();

    Form(std::string, int, int);

    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getSign() const;

    void beSigned( Bureaucrat & );

    class GradeTooHighException : public std::exception {
    public:
        const char * what () const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char * what () const throw();
    };

};

std::ostream & operator << ( std::ostream& , const Form& );


#endif //CPP_MODULES_FORM_H
