//
// Created by Josue Chopped on 7/1/22.
//

#include "Intern.h"

const std::string	Intern::formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};


/*
 * Fabric methods
 */


Form *Intern::createRobotomyRequest(std::string target) {
    std::cout << "Intern creates robotomyForm" << std::endl;
    return new RobotomyRequestForm("robotomyForm", target);
}

Form *Intern::createPresidentalPardon(std::string target) {
    std::cout << "Intern creates presidentialForm" << std::endl;
    return new PresidentialPardonForm("presidentialForm", target);
}


Form *Intern::createShrubberyCreation(std::string target) {
    std::cout << "Intern creates shrubberyForm" << std::endl;
    return new ShrubberyCreationForm("shrubberyForm", target);
}


int Intern::findFormIndex( std::string formName ) {

    for (int i = 0; i < formNames->length(); i++) {
        if (0 == Intern::formNames[i].compare(formName)) {
            return i;
        }
    }
    throw Intern::FormNotFoundException();
}

Form *Intern::makeForm( std::string formName, std::string target) {

    Form		*(Intern::*funcs_arr[3])( std::string target ) = {&Intern::createRobotomyRequest,
                                                                 &Intern::createPresidentalPardon,
                                                                 &Intern::createShrubberyCreation};
    return (this->*funcs_arr[findFormIndex(formName)]) (target);

}



/*
 * Exceptions
 */

const char * Intern::FormNotFoundException::what () const throw() {
    return (char *) "Caught FormNotFoundException";
}