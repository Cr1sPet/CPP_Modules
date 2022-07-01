
#include "Bureaucrat.h"

int main (void) {

    try {
        std::cout << "Test #1. Try to set too low grade (151)" << std::endl;
        Bureaucrat bureaucrat("Bob", 151);
        std::cout << "Success" << std::endl;
    } catch (std::exception &e) {

        std::cout << "Failure : " << std::endl;
        std::cout << e.what();
    }
    std::cout << std::endl;
    try {
        std::cout << "Test #2. Try to set too high grade (0)" << std::endl;
        Bureaucrat bureaucrat("Bob", 0);
        std::cout << "Success" << std::endl;
    } catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << "Failure : " << std::endl;
        std::cout << e.what();
    }

    try {
        std::cout << "Test #3. Try to set grade 10 and increase it by 20 points" << std::endl;
        Bureaucrat bureaucrat("Bob", 10);
        std::cout << "Success : Set grade 10" << std::endl;
        bureaucrat.incrementGrade(20);
        std::cout << "Success : Increase grade by 20" << std::endl;
    } catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << "Failure : Increase grade by 20" << std::endl;
        std::cout << e.what();
    }

    try {
        std::cout << "Test #4. Try to set grade 10 and decrease it by 141 points" << std::endl;
        Bureaucrat bureaucrat("Bob", 10);
        std::cout << "Success : Set grade 10" << std::endl;
        bureaucrat.decrementGrade(141);
        std::cout << "Success : decrease grade by 141" << std::endl;
    } catch (Bureaucrat::GradeTooLowException & e) {
        std::cout << "Failure : Decrease grade by 141" << std::endl;
        std::cout << e.what();
    }

    return 0;
}

