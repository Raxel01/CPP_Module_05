

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <iomanip>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    private :
        AForm* Shrubbery(std::string Target);  
        AForm* Robot(std::string Target); 
        AForm* President(std::string Target);
    public :
        Intern();
        Intern(const Intern &Obj);
        Intern& operator=(const Intern &Origine);
        class NoSuitabName : public std::exception
        {
            public :
                const char* what() const throw();
        };
        class NoPredectedError : public std::exception
        {
            public :
                const char* what() const throw();
        };
        AForm*  makeForm(std::string FormName, std::string Target);
        ~Intern();
};


#endif
    
