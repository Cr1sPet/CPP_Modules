//
// Created by serj on 30.06.22.
//

#include "Bureaucrat.h"

/*
 *  Init constructor
 */

Bureaucrat::Bureaucrat( std::string name, int grade ) : name(name){

//    std::cout << "Initialization constructor" << std::endl;

    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }

    this->grade = grade;

}

/*
 * Canonical form
 */


Bureaucrat::Bureaucrat() : name("default") {
    this->grade = 10;
//    std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &bureaucrat) {

    if (this != &bureaucrat) {
//        this->name = bureaucrat.name;
        this->grade = bureaucrat.grade;
    }

//    std::cout << "Assignment operator Bureaucrat" << std::endl;

    return *this;
}

Bureaucrat::Bureaucrat ( const Bureaucrat & bureaucrat ) : name(bureaucrat.name){

    this->grade = bureaucrat.grade;
//    std::cout << "Copy constructor Bureaucrat" << std::endl;

}

Bureaucrat::~Bureaucrat() {
//    std::cout << "Bureaucrat destructor" << std::endl;
}

/*
 *  Getters
 */

std::string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}


/*
 *  cout overloading
 *  */

std::ostream &operator << ( std::ostream &out, Bureaucrat const &bureaucrat ) {
    out << bureaucrat.getName() + ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}

/*
 * Logic
 */

void Bureaucrat::incrementGrade(int value) {
    this->grade -= value;
    if (this->grade < 1) {
        throw GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade(int value) {
    this->grade += value;
    if (this->grade > 150) {
        throw GradeTooLowException();
    }
}

void Bureaucrat::signForm( Form & form ) {
    try {
        form.beSigned(*this);
        std::cout << "Bureaucrat " << this->name\
                    << " signed form " << form.getName()\
                    << std::endl;
    } catch (Form::GradeTooLowException & e) {
        std::cout << "Bureaucrat " << this->name\
                    << " couldn't sign form " << form.getName()\
                    << " because " << e.what() << std::endl;
    }
}


/*
 * Exceptions
 */

const char * Bureaucrat::GradeTooLowException::what () const throw() {
    return (char *) "Caught GradeTooLowException\n";
}
const char * Bureaucrat::GradeTooHighException::what () const throw() {
    return (char *) "Caught GradeTooHighException\n";
}


