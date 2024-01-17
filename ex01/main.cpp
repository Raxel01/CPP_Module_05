#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    try
    {
        Bureaucrat Bobj(3, "ABdO");
        Form Fobj("7alla madaniya", 20, 30);
        Form TEST("zyada", 1, 50);
        Form nFobj(Fobj);
        nFobj = Fobj;
        std::cout << nFobj <<std::endl;
        std::cout << "===========≠≠≠≠≠====≠≠≠≠≠≠========" <<std::endl;
        std::cout << "Initial Value : " << Bobj.getGrade() <<std::endl;
        Bobj.increment();
        std::cout << "Grade : " << Bobj.getGrade() <<std::endl;
        Bobj.decrement();
        std::cout << "Grade : " << Bobj.getGrade() <<std::endl;
        Bobj.increment();
        std::cout << "Grade : " << Bobj.getGrade() <<std::endl;
        std::cout << Bobj << std::endl;
        Fobj.beSigned(Bobj);
        Bobj.signForm(TEST);
    }catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << " Handler Scopre End "<<std::endl; 
    return (0);
}