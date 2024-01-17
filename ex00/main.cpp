#include <iostream>
#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat obj('9', "ABdO");
        std::cout << "Initial Value : " << obj.getGrade() <<std::endl;
        obj.increment();
        std::cout << obj.getGrade() <<std::endl;
        obj.decrement();
        std::cout << obj.getGrade() <<std::endl;
        obj.increment();
        std::cout << obj.getGrade() <<std::endl;
        std::cout << obj << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << " OK "<<std::endl; 
    return (0);
}      