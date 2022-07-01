
#include "Bureaucrat.h"

int main (void) {

    try {
        Form form("first", 100, 50);
        Bureaucrat bureaucrat("Bob", 101);
        bureaucrat.signForm(form);

        bureaucrat.incrementGrade(1);
        bureaucrat.signForm(form);

    } catch (std::exception &e) {
        std::cout << e.what();
    }

    try {
        Form form1("second", 151, 50);
    } catch (Form::GradeTooLowException & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Form form1("second", 12, 0);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

