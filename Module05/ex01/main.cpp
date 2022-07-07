
#include "Bureaucrat.h"

int main (void) {

    try {
        int gradeBureaucrat = 101;
        int gradeToSign = 100;
        Form form("first", gradeToSign, 50);
        Bureaucrat bureaucrat("Bob", gradeBureaucrat);

        bureaucrat.signForm(form);

        bureaucrat.incrementGrade(1);
        bureaucrat.signForm(form);

    } catch (std::exception &e) {
        std::cout << e.what();
    }

    std::cout << std::endl;

    try {
        int gradeToSign = 151;
        std::cout << "Try to create form with gradeToSign == " << gradeToSign << std::endl;
        Form form1("second", gradeToSign, 50);
    } catch (Form::GradeTooLowException & e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        int gradeToExecute = 0;
        std::cout << "Try to create form with gradeToSign == " << gradeToExecute << std::endl;
        Form form1("second", 12, gradeToExecute);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

