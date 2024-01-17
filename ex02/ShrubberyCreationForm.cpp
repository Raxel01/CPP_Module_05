
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
    this->target = "RandomName";
    std::cout << "#" << std::setw(46) << "ShrubberyCreationForm Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Obj) : AForm(Obj.GetName(), Obj.GetRequiredGrade(), Obj.GetGradeToExecute())
{
    std::cout << "#" << std::setw(43) << "ShrubberyCreationForm Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    this->setFormatStatus(Obj.GetAFormStatus());
    this->target = Obj.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "#" << std::setw(40) << "ShrubberyCreationForm  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Origine)
{
     std::cout << "#" << std::setw(51) << "ShrubberyCreationForm Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
    if (this != &Origine)
    {
        AForm::operator=(Origine);
        this->target = Origine.target;
    } 
     return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Affecttarget) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "#" << std::setw(46) << "ShrubberyCreationForm Default Constructor Called " << std::setw(9) << "---]" << std::endl;
    this->target = Affecttarget;
    std::ofstream Outfile(target + "_shrubbery");
    Outfile << "                                                         .                " << std::endl;     
    Outfile << "                                              .         ;                 " << std::endl; 
    Outfile << "                 .              .              ;%     ;;                  " << std::endl;             
    Outfile << "                   ,           ,                :;%  %;                   " << std::endl;             
    Outfile << "                    :         ;                   :;%;'     .,            " << std::endl;             
    Outfile << "           ,.        %;     %;            ;        %;'    ,;              " << std::endl;             
    Outfile << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'               " << std::endl;         
    Outfile << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'                " << std::endl;         
    Outfile << "               ;%;      %;        ;%;        % ;%;  ,%;'                  " << std::endl;         
    Outfile << "                `%;.     ;%;     %;'         `;%%;.%;'                    " << std::endl;     
    Outfile << "                 `:;%.    ;%%. %@;        %; ;@%;%'                       " << std::endl;             
    Outfile << "                    `:%;.  :;bd%;          %;@%;'                         " << std::endl;                
    Outfile << "                      `@%:.  :;%.         ;@@%;'                          " << std::endl;             
    Outfile << "                        `@%.  `;@%.      ;@@%;                            " << std::endl;     
    Outfile << "                          `@%%. `@%%    ;@@%;                             " << std::endl;            
    Outfile << "                            ;@%. :@%%  %@@%;                              " << std::endl; 
    Outfile << "                              %@bd%%%bd%%:;                               " << std::endl;     
    Outfile << "                                #@%%%%%:;;                                " << std::endl; 
    Outfile << "                                %@@%%%::;                                 " << std::endl; 
    Outfile << "                                %@@@%(o);  . '                            " << std::endl;         
    Outfile << "                                %@@@o%;:(.,'                              " << std::endl; 
    Outfile << "                            `.. %@@@o%::;                                 " << std::endl;     
    Outfile << "                               `)@@@o%::;                                 " << std::endl;         
    Outfile << "                                %@@(o)::;                                 " << std::endl;             
    Outfile << "                               .%@@@@%::;                                 " << std::endl; 
    Outfile << "                               ;%@@@@%::;.                                " << std::endl; 
    Outfile << "                              ;%@@@@%%:;;;.                               " << std::endl;              
    Outfile << "                          ...;%@@@@@%%:;;;;,..                            " << std::endl;
    Outfile.close();
}

void    ShrubberyCreationForm::beSigned(const Bureaucrat& burocrat)
{
    if (burocrat.getGrade() <= this->GetRequiredGrade())
        this->setFormatStatus(true);
    else
        throw AForm::GradeTooLowException();
}

std::string ShrubberyCreationForm::GetTarget()
{
    return (target);
}
