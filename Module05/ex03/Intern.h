//
// Created by Josue Chopped on 7/1/22.
//

#ifndef CPP_MODULES_INTERN_H
#define CPP_MODULES_INTERN_H

#include <iostream>
#include "Form.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

class Intern {

    static const std::string formNames[3];

    Form *createRobotomyRequest(std::string target);

    Form *createPresidentalPardon(std::string target);

    Form *createShrubberyCreation(std::string target);

    int findFormIndex(std::string);

public:

    Form *makeForm(std::string formName, std::string target);


    class FormNotFoundException : public std::exception {
    public:
        const char *what() const throw();
    };

};

#endif //CPP_MODULES_INTERN_H
