//
// Created by Josue Chopped on 7/1/22.
//

#ifndef CPP_MODULES_PRESIDENTIALPARDONFORM_H
#define CPP_MODULES_PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm : public Form {

public:

    PresidentialPardonForm();
    PresidentialPardonForm & operator = ( const PresidentialPardonForm & );
    PresidentialPardonForm ( const PresidentialPardonForm & );
    ~PresidentialPardonForm();

    PresidentialPardonForm(std::string target);

    PresidentialPardonForm( std::string, std::string );

    void beSigned( Bureaucrat & );
    void execute(Bureaucrat const & executor) const;

};


#endif //CPP_MODULES_PRESIDENTIALPARDONFORM_H
