//
// Created by Josue Chopped on 7/1/22.
//

#ifndef CPP_MODULES_ROBOTOMYREQUESTFORM_H
#define CPP_MODULES_ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form {

public:

    RobotomyRequestForm();
    RobotomyRequestForm & operator = ( const RobotomyRequestForm & );
    RobotomyRequestForm ( const RobotomyRequestForm & );
    ~RobotomyRequestForm();

    RobotomyRequestForm(std::string);

    RobotomyRequestForm( std::string, std::string );

    void beSigned( Bureaucrat & );
    void execute(Bureaucrat const & executor) const;

};


#endif //CPP_MODULES_ROBOTOMYREQUESTFORM_H
