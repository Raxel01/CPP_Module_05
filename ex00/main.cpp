#include <iostream>
#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat obj(1, "Éros");
        obj.increment();

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}      