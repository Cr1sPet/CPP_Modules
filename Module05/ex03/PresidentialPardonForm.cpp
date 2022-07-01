//
// Created by Josue Chopped on 7/1/22.
//

#include "PresidentialPardonForm.h"

/*
 *  Initial constructor
 */


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("default_presidental", 25, 5) {
    std::cout << "PresidentialPardonForm Init constructor" << std::endl;
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : Form(name, target) {}

/*
 * Canonical form
 */

PresidentialPardonForm::PresidentialPardonForm() : Form("default_presidental", 25, 5) {
//    std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &form) {

    if (this != &form) {
        this->setSign(form.getSign());
    }

//    std::cout << "Assignment operator PresidentialPardonForm" << std::endl;

    return *this;
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm & form ) : Form(
        form.getName(), form.getGradeToSign(), form.getGradeToExecute()
        ){

    this->setSign(form.getSign());
//    std::cout << "Copy constructor PresidentialPardonForm" << std::endl;

}

PresidentialPardonForm::~PresidentialPardonForm() {
//    std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void PresidentialPardonForm::beSigned( Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() <= this->getGradeToSign()) {
        std::cout << "Presidential sign" << std::endl;
        this->setSign(true);
    } else {
        throw Form::GradeTooLowException();
    }
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    try {
        PresidentialPardonForm::executePermitted(executor);
        std::cout << this->getTarget() << " has been pardoned by bureaucrat " << executor.getName() << std::endl;
    } catch (PresidentialPardonForm::GradeTooLowException & e) {
        throw PresidentialPardonForm::GradeTooLowException();
    }
}
