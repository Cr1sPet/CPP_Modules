
#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main (void) {

    try {
        PresidentialPardonForm presidentialPardonForm ("Bicycle");
        std::cout << presidentialPardonForm << std::endl;
        RobotomyRequestForm robotomyRequestForm ("Bicycle");
        std::cout << robotomyRequestForm << std::endl;
        ShrubberyCreationForm shrubberyCreationForm ("Bicycle");
        std::cout << shrubberyCreationForm << std::endl;
        Bureaucrat bureaucrat("Bob", 45);
        bureaucrat.signForm(shrubberyCreationForm);
        bureaucrat.executeForm(shrubberyCreationForm);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }



    return 0;
}

//void hello () {
//    throw "Error file opening!";
//}
//
//void world() {
//    hello();
//}
//
//
//int main () {
//
//    try {
//        world();
//    } catch (const char * cstr) {
//        std::cout << " be1cause " << cstr << std::endl;
//    }
//
//    return 0;
//}
