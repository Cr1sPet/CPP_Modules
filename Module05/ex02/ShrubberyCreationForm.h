//
// Created by Josue Chopped on 7/1/22.
//

#ifndef CPP_MODULES_SHRUBBERYCREATIONFORM_H
#define CPP_MODULES_SHRUBBERYCREATIONFORM_H

#include "Form.h"
#include <fstream>

#define ASCII_THREE      \
"    oxoxoo    ooxoo\n"  \
"  ooxoxo oo  oxoxooo\n" \
" oooo xxoxoo ooo ooox\n"\
" oxo o oxoxo  xoxxoxo\n"\
"  oxo xooxoooo o ooo\n" \
"    ooo'\'oo'\'  /o/o\n"\
"        '\'  '\'/ /\n"  \
"         |   /\n"       \
"         |  |\n"        \
"         | D|\n"        \
"         |  |\n"        \
"         |  |\n"        \
"  ______/____'\'____\n" \

class ShrubberyCreationForm : public Form {

public:

    ShrubberyCreationForm();
    ShrubberyCreationForm & operator = ( const ShrubberyCreationForm & );
    ShrubberyCreationForm ( const ShrubberyCreationForm & );
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(std::string);

    void beSigned( Bureaucrat & );
    void execute(Bureaucrat const & executor) const;

    /*
    class GradeTooHighException : public std::exception {
    public:
        const char * what () const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char * what () const throw();
    };
    */
};


#endif //CPP_MODULES_SHRUBBERYCREATIONFORM_H
