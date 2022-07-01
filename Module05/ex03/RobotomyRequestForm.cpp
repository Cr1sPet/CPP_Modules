//
// Created by Josue Chopped on 7/1/22.
//

#include "RobotomyRequestForm.h"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("default_robotomy", 72, 45) {
    std::cout << "RobotomyRequestForm Init constructor" << std::endl;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : Form(name, target) {}


/*
 * Canonical form
 */

RobotomyRequestForm::RobotomyRequestForm() : Form("default_presidental", 72, 45) {
//    std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &form) {

    if (this != &form) {
        this->setSign(form.getSign());
    }

//    std::cout << "Assignment operator RobotomyRequestForm" << std::endl;

    return *this;
}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm & form ) : Form(
        form.getName(), form.getGradeToSign(), form.getGradeToExecute()
){

    this->setSign(form.getSign());
//    std::cout << "Copy constructor RobotomyRequestForm" << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm() {
//    std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void RobotomyRequestForm::beSigned( Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() <= this->getGradeToSign()) {
        std::cout << "Robotomy sign" << std::endl;
        this->setSign(true);
    } else {
        throw Form::GradeTooLowException();
    }
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    try {
        std::srand(std::time(nullptr));
        RobotomyRequestForm::executePermitted(executor);
        std::cout << "Makes some drilling noises..." << std::endl;
        if (rand() % 2 == 0) {
            std::cout << this->target << " has been robotomized!" << std::endl;
        } else {
            std::cout << this->target << " robotomy failed!" << std::endl;
        }
    } catch (RobotomyRequestForm::GradeTooLowException & e) {
        throw RobotomyRequestForm::GradeTooLowException();
    }
}
