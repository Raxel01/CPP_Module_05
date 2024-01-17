
#include "AForm.hpp"

AForm::AForm() : name("KARTONA"), AFormStatus(false),  Requiredgrade(0), GradeToExecute(0)
{
    throw GradeTooHighException();
    std::cout << "#" << std::setw(46) << "AForm Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

AForm::AForm(std::string const AffectName, int  AffectRequiredgrade, 
    int  AffectGradeToExecute) : name(AffectName), AFormStatus(false),
Requiredgrade(AffectRequiredgrade), GradeToExecute(AffectGradeToExecute)
{
    if (Requiredgrade < 1 || GradeToExecute < 1)
        throw GradeTooHighException();
    if (Requiredgrade > 150 || GradeToExecute > 150)
        throw GradeTooLowException();
    std::cout << "Form Parametrised Constructor Called " <<std::endl;
}

AForm::AForm(const AForm& Obj) : name(Obj.name), AFormStatus(Obj.AFormStatus),
Requiredgrade(Obj.Requiredgrade), GradeToExecute(Obj.GradeToExecute)
{
    std::cout << "#" << std::setw(43) << "AForm Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
}

AForm::~AForm()
{
    std::cout << "#" << std::setw(40) << "AForm  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

std::ostream &operator <<(std::ostream &os, const AForm  &Obj)
{
    os << "The AForm Name : " << Obj.GetName() << std::endl;
    os << "AForm  Status  : " << Obj.GetAFormStatus() << std::endl;
    os << "Required Grade: " << Obj.GetRequiredGrade() << std::endl;
    os << "GradeToExecut : " << Obj.GetGradeToExecute();
    return os;
}

AForm & AForm::operator=(const AForm &Origine)
{
     std::cout << "#" << std::setw(51) << "AForm Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
     if (this != &Origine)
            this->AFormStatus = Origine.AFormStatus;
     return (*this);
}

std::string    AForm::GetName() const {
    return this->name;
}

bool    AForm::GetAFormStatus() const {
    return this->AFormStatus;    
}

int     AForm::GetRequiredGrade() const {
    return this->Requiredgrade;
}

int     AForm::GetGradeToExecute() const {
    return this->GradeToExecute;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("AForm GradeTooHighException throwed");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("AForm GradeTooLowException throwed");
}

void AForm::setFormatStatus(bool status) 
{
    this->AFormStatus = status;
}

void    AForm::execute(Bureaucrat const & executor) const 
{
    if (AFormStatus && executor.getGrade() <= GradeToExecute)
        std::cout << executor.getName() << " Execute the form : " << name << "\n";
    else
        throw GradeTooLowException();
}


