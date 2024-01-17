#include "Bureaucrat.hpp"
#include "AForm.hpp"

std::ostream &operator <<(std::ostream &os, const Bureaucrat  &Obj)
{
    os << Obj.getName() << " , bureaucrat grade " << Obj.getGrade();
    return os ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& Obj)
{
    std::cout << " Copy Constructor Called ! "<<std::endl;
    *this = Obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& Obj)
{
    std::cout << "Copy Assignment Operator Called " <<std::endl;
    if (this != &Obj)
        this->grade = Obj.getGrade();
    return (*this);
}

Bureaucrat::Bureaucrat() : grade(0), name("Thanatos")
{
    throw   GradeTooHighException();
    std::cout << " Default Constructor Called " <<std::endl;
}

Bureaucrat::Bureaucrat(int GradeToAssign, std::string NameToAssign) : name(NameToAssign)
{
    std::cout << "Parametrised Constructor Called "<< std::endl;
        if (GradeToAssign < 1){
            throw GradeTooHighException();
        }
        if (GradeToAssign > 150){
            throw  GradeTooLowException();
        }
        grade =  GradeToAssign;
}

const std::string     Bureaucrat::getName() const
{
    return this->name;
}

int     Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << " Bureaucrat Destructor Called " <<std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException throwed");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException throwed");
}

void   Bureaucrat::increment()
{
    if ((grade - 1) < 1)
        throw GradeTooHighException();
    grade--;
}

void   Bureaucrat::decrement()
{
    if ((grade + 1) > 150)
        throw GradeTooLowException();
    grade++;
}

void    Bureaucrat::signAForm(AForm& AFormObj)
{
    try{
        AFormObj.beSigned(*this);
        std::cout << this->getName() << " signed " << AFormObj.GetName() << std::endl;
    }catch (std::exception &e){
        std::cout << this->getName() <<  " couldn't sign " << AFormObj.GetName() << " because " << e.what() <<std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try{
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.GetName() << std::endl;
    }
    catch(std::exception &e){
        std::cout << this->getName() << " can't execute " << form.GetName() << " Because "<< e.what() << std::endl;
    }
}