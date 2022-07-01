#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include "Intern.h"

int main (void) {

    try {
        Intern someRandomIntern;
        Form *rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;

        delete rrf;
    } catch ( Intern::FormNotFoundException & e ) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
