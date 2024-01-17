

#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <iostream>
#include <iomanip>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private :
        std::string target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(std::string Affecttarget);
        RobotomyRequestForm(const RobotomyRequestForm &Obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &Origine);
        void    beSigned(const Bureaucrat& burocrat);
        std::string GetTarget();
        ~RobotomyRequestForm();
    
};

#endif
    
