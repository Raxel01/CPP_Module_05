#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main ()
{
    try
    {
    //     ShrubberyCreationForm OBJ("shrubiryyyyyyyyyy");
    //     RobotomyRequestForm Obj("ROBOTtttttttttttttt");
    //     PresidentialPardonForm pris("PRISiiiiiiidddd");
    //     Bureaucrat buro(2, "Flaaaan");

    //     OBJ.beSigned(buro);
    //     std::cout << "===================================="<<std::endl;
    //     std::cout << OBJ <<std::endl;
    //     std::cout << OBJ.GetTarget()<<std::endl;
    //     std::cout << "-----------------------------------"<<std::endl;
    //     // << pris.GetTarget()<<std::endl;
    //     std::cout << "=======================^ORIGINESSSSSSSSSSSS^=============="<<std::endl;

    //     ShrubberyCreationForm OBJ1(OBJ);
    //     RobotomyRequestForm Obj1(Obj);
    //     PresidentialPardonForm pris1(pris);
     
    //     std::cout << "====================|Verify Success Copy Constructor |================"<<std::endl;
    //     std::cout << OBJ <<std::endl;
    //     std::cout << " Get FormStatus OBJ1 : " << OBJ1.GetAFormStatus() <<std::endl;
    //     std::cout << "Target_Name : " << OBJ.GetTarget()<<std::endl;
    //     std::cout << "-----------------------------------"<<std::endl;

    //     std::cout << "======================================================"<<std::endl;
    //     Bureaucrat LOL;
    Intern OBJint;

    AForm *ptrr;

    ptrr = OBJint.makeForm("Presidential Pardon", "Lbaccaleauriataa");
    // std::cout << "Form Name : " << ptrr->GetName() << std::endl;
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << " Handler Scopre End "<<std::endl; 
    return (0);
}