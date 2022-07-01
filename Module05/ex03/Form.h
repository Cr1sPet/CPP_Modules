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


protected:

    std::string target;

public:

    Form();
    Form & operator = ( const Form & );
    Form ( const Form & );
    virtual ~Form();

    Form(std::string, int, int);
    Form(std::string, std::string);

    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getSign() const;
    std::string getTarget() const;

    void setSign(const bool sign);
    virtual void execute(Bureaucrat const & executor) const = 0;
    void executePermitted( Bureaucrat const & ) const;

    virtual void beSigned( Bureaucrat & ) = 0;

    class GradeTooHighException : public std::exception {
    public:
        const char * what () const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char * what () const throw();
    };

    class FormIsNotSignedException : public std::exception {
    public:
        const char * what () const throw();
    };

};

std::ostream & operator << ( std::ostream& , const Form& );


#endif //CPP_MODULES_FORM_H
