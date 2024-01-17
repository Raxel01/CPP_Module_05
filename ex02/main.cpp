#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main ()
{
    try
    {
        ShrubberyCreationForm OBJ("shrubiryyyyyyyyyy");
        RobotomyRequestForm Obj("ROBOTtttttttttttttt");
        PresidentialPardonForm pris("PRISiiiiiiidddd");
        Bureaucrat buro(2, "Flaaaan");

        OBJ.beSigned(buro);
        std::cout << "===================================="<<std::endl;
        std::cout << OBJ <<std::endl;
        std::cout << OBJ.GetTarget()<<std::endl;
        std::cout << "-----------------------------------"<<std::endl;
        // std::cout << Obj<<std::endl;
        // std::cout << Obj.GetTarget()<<std::endl;
        // std::cout << "-----------------------------------"<<std::endl;
        // std::cout << pris <<std::endl;
        // std::cout << pris.GetTarget()<<std::endl;
        std::cout << "=======================^ORIGINESSSSSSSSSSSS^=============="<<std::endl;

        ShrubberyCreationForm OBJ1(OBJ);
        RobotomyRequestForm Obj1(Obj);
        PresidentialPardonForm pris1(pris);
        // OBJ1.beSigned(buro);
        // OBJ =OBJ1;  Obj = Obj1 ;pris = pris1 ;
        std::cout << "====================|Verify Success Copy Constructor |================"<<std::endl;
        // std::cout << "===================================="<<std::endl;
        std::cout << OBJ <<std::endl;
        std::cout << " Get FormStatus OBJ1 : " << OBJ1.GetAFormStatus() <<std::endl;
        std::cout << "Target_Name : " << OBJ.GetTarget()<<std::endl;
        std::cout << "-----------------------------------"<<std::endl;
        // std::cout << Obj<<std::endl;
        // std::cout << Obj.GetTarget()<<std::endl;
        // std::cout << "-----------------------------------"<<std::endl;
        // std::cout << pris <<std::endl;
        // std::cout << pris.GetTarget()<<std::endl;
        std::cout << "======================================================"<<std::endl;
        // Bureaucrat Bobj(3, "ABdO");
        // AForm Fobj("7alla madaniya", 20, 30);
        // AForm TEST("zyada", 1, 50);
        // AForm nFobj(Fobj);
        // nFobj = Fobj;
        // std::cout << nFobj <<std::endl;
        // std::cout << "===========≠≠≠≠≠====≠≠≠≠≠≠========" <<std::endl;
        // std::cout << "Initial Value : " << Bobj.getGrade() <<std::endl;
        // Bobj.increment();
        // std::cout << "Grade : " << Bobj.getGrade() <<std::endl;
        // Bobj.decrement();
        // std::cout << "Grade : " << Bobj.getGrade() <<std::endl;
        // Bobj.increment();
        // std::cout << "Grade : " << Bobj.getGrade() <<std::endl;
        // std::cout << Bobj << std::endl;
        // Fobj.beSigned(Bobj);
        // Bobj.signAForm(TEST);
        Bureaucrat LOL;
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << " Handler Scopre End "<<std::endl; 
    return (0);
}