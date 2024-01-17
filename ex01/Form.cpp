
#include "Form.hpp"

Form::Form() : name("KARTONA"), FormStatus(false),  Requiredgrade(0), GradeToExecute(0)
{
    throw GradeTooHighException();
    std::cout << "#" << std::setw(46) << "Form Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

Form::Form(std::string const AffectName, int  AffectRequiredgrade, 
    int  AffectGradeToExecute) : name(AffectName), FormStatus(false),
Requiredgrade(AffectRequiredgrade), GradeToExecute(AffectGradeToExecute)
{
    if (Requiredgrade < 1 || GradeToExecute < 1)
        throw GradeTooHighException();
    if (Requiredgrade > 150 || GradeToExecute > 150)
        throw GradeTooLowException();
    std::cout << " Parametrised Constructor Called " <<std::endl;
}

Form::Form(const Form& Obj) : name(Obj.name), FormStatus(Obj.FormStatus),
Requiredgrade(Obj.Requiredgrade), GradeToExecute(Obj.GradeToExecute)
{
    std::cout << "#" << std::setw(43) << "Form Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    // *this = Obj;
}

Form::~Form()
{
    std::cout << "#" << std::setw(40) << "Form  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

std::ostream &operator <<(std::ostream &os, const Form  &Obj)
{
    os << "The Form Name : " << Obj.GetName() << std::endl;
    os << "Form  Status  : " << Obj.GetFormStatus() << std::endl;
    os << "Required Grade: " << Obj.GetRequiredGrade() << std::endl;
    os << "GradeToExecut : " << Obj.GetGradeToExecute();
    return os;
}

Form & Form::operator=(const Form &Origine)
{
     std::cout << "#" << std::setw(51) << "Form Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
     if (this != &Origine)
            this->FormStatus = Origine.FormStatus;
     return (*this);
}

std::string    Form::GetName() const {
    return this->name;
}

bool    Form::GetFormStatus() const {
    return this->FormStatus;    
}

int     Form::GetRequiredGrade() const {
    return this->Requiredgrade;
}

int     Form::GetGradeToExecute() const {
    return this->GradeToExecute;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Form GradeTooHighException throwed");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Form GradeTooLowException throwed");
}

void    Form::beSigned(const Bureaucrat& burocrat)
{
    if (burocrat.getGrade() <= this->GetRequiredGrade())
        this->FormStatus = true;
    else
        throw Form::GradeTooLowException();
}

