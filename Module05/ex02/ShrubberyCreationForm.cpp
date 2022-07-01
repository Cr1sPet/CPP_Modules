//
// Created by Josue Chopped on 7/1/22.
//

#include "ShrubberyCreationForm.h"



ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("default_shrubbery", 145, 137) {
    std::cout << "ShrubberyCreationForm Init constructor" << std::endl;
    this->target = target;
}

/*
 * Canonical form
 */

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default_shrubbery", 145, 137) {
//    std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &form) {

    if (this != &form) {
        this->setSign(form.getSign());
    }

//    std::cout << "Assignment operator ShrubberyCreationForm" << std::endl;

    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm & form ) : Form(
        form.getName(), form.getGradeToSign(), form.getGradeToExecute()
){

    this->setSign(form.getSign());
//    std::cout << "Copy constructor ShrubberyCreationForm" << std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm() {
//    std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

void ShrubberyCreationForm::beSigned( Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() <= this->getGradeToSign()) {
        std::cout << "Shrubbery sign" << std::endl;
        this->setSign(true);
    } else {
        throw Form::GradeTooLowException();
    }
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    try {
        ShrubberyCreationForm::executePermitted(executor);
    } catch (ShrubberyCreationForm::GradeTooLowException & e) {
        throw ShrubberyCreationForm::GradeTooLowException();
    }
    std::ofstream outfile;
    outfile.open(this->target + "_shrubbery");
    if (!outfile.is_open()) {
        std::cout << "ZASHEL!" << std::endl;
        throw std::ios::failure( "Error opening file!" );
    }
    outfile << ASCII_THREE << std::endl;
    outfile.close();
}