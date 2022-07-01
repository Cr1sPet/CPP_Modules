//
// Created by serj on 01.07.22.
//

#include "Form.h"

/*
 *  Initialization constructor
 */

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign),
                                gradeToExecute(gradeToExecute) {

    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }

//    std::cout << "Initialization constructor Form" << std::endl;

}

/*
 * Canonical form
 */

Form::Form() : name("default"),\
                gradeToSign(100),\
                gradeToExecute(50) {
    this->sign = false;
//    std::cout << "Form default constructor" << std::endl;
}

Form & Form::operator = (const Form &form) {

    if (this != &form) {
        this->sign = form.sign;
    }

//    std::cout << "Assignment operator Form" << std::endl;

    return *this;
}

Form::Form ( const Form & form ) : name(form.name),\
                                    gradeToSign(form.gradeToSign),\
                                    gradeToExecute(form.gradeToExecute){

    this->sign = form.sign;
//    std::cout << "Copy constructor Form" << std::endl;

}

Form::~Form() {
//    std::cout << "Form destructor" << std::endl;
}


/*
 * getters
 */

std::string Form::getName() const {
    return this->name;
}

int Form::getGradeToSign() const {
    return this->gradeToSign;
}

int Form::getGradeToExecute() const {
    return this->gradeToExecute;
}

bool Form::getSign() const {
    return this->sign;
}

/*
 *  cout overloading
 *  */

std::ostream &operator << ( std::ostream &out, Form const &form ) {
    out << form.getName() + ", form grade to sign : " << form.getGradeToSign()\
        << ", grade to execute : " << form.getGradeToExecute()\
        << ", signed : " << form.getSign() << std::endl;
    return out;
}


/*
 * Exceptions
 */

const char * Form::GradeTooLowException::what () const throw() {
    return (char *) "Caught GradeTooLowException";
}
const char * Form::GradeTooHighException::what () const throw() {
    return (char *) "Caught GradeTooHighException";
}

/*
 * Logic
 */

void Form::beSigned( Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() <= this->gradeToSign) {
        this->sign = true;
    } else {
        throw Form::GradeTooLowException();
    }
}