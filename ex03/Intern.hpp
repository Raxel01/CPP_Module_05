

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

    public :
        Intern();
        Intern(const Intern &Obj);
        Intern& operator=(const Intern &Origine);
        class NoSuitabName : public std::exception
        {
            public :
                const char* what() const throw();
        };
        AForm*  makeForm(std::string FormName, std::string Target);
        ~Intern();
};


AForm*  Intern::makeForm(std::string FormName, std::string Target)
{


}

const char* Intern::NoSuitabName::what ()  const throw()
{

}
#endif
    
