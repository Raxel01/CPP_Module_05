
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotForm", 72, 45)
{
    this->target = "RandomRobotmiserName";
    std::cout << "#" << std::setw(46) << "RobotomyRequestForm Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &Obj) : AForm(Obj.GetName(), Obj.GetRequiredGrade(), Obj.GetGradeToExecute())
{
    std::cout << "#" << std::setw(43) << "RobotomyRequestForm Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    this->setFormatStatus(Obj.GetAFormStatus());
    this->target = Obj.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "#" << std::setw(40) << "RobotomyRequestForm  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &Origine)
 {
     std::cout << "#" << std::setw(51) << "RobotomyRequestForm Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
     if (this != &Origine)
     {
        AForm::operator=(Origine);
        this->target = Origine.target;
     }
     return (*this);
 }

RobotomyRequestForm::RobotomyRequestForm(std::string Affecttarget) :AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << " DRILLLLING NOISSSSEEEEEEEEEEE MAKEEEEEED "<<std::endl;
    this->target = Affecttarget;
    srand(time(0));
    int i (0);
    double randomNumber;
    while (++i < 50)
        randomNumber = rand() / (double)RAND_MAX;
    if (randomNumber <= 0.5)
        std::cout << this->target << " has been robotomized successfull "<< std::endl;
    else
    {
        std::cout << "       ⠀⠀⠀⣠⣴⡶⠾⠛⠛⠛⠛⠷⢶⣦⣄⡀         " << std::endl;
        std::cout << "⠀⠀⠀⠀⠀⠀⣠⡾⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⢷⣄⠀⠀⠀⠀⠀⠀" << std::endl;
        std::cout << "⠀⠀⠀⠀⢠⣾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣷⡄⠀⠀⠀⠀" << std::endl;
        std::cout << "⠀⠀⠀⣰⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣆⠀⠀⠀" << std::endl;
        std::cout << "⠀⠀⢠⣿⠁⠀⠀⠀⣾⣆⠀⠀⠀⠀⠀⢀⣤⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⡄⠀⠀" << std::endl;
        std::cout << "⠀⠀⢸⡇⠀⠀⠀⢠⡿⠹⣷⣄⠀⠀⠀⢸⡿⣧⡀⠀⠀⠀⠀⠀⠀⠀⢸⣇⠀⠀" << std::endl;
        std::cout << "⠀⠀⢸⡇⠀⢀⣴⡿⠁⠀⠈⠛⢷⣤⣀⣸⣷⠙⢷⣄⠀⠀⠀⠀⠀⠀⢸⡿⠀⠀" << std::endl;
        std::cout << "⠀⠀⢸⣷⢾⡟⠋⠀⠀⠀⠀⠀⠀⠈⠉⠛⠛⠃⠀⠙⢷⣦⣀⠀⠀⠀⣸⡇⠀⠀" << std::endl;
        std::cout << "⠀⠀⣿⡇⢸⡇⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣈⠙⠻⢷⣶⡿⣿⠀⠀" << std::endl;
        std::cout << "⠀⠀⠘⢷⣼⡇⠀⠐⣿⡏⣿⠃⠀⠀⠀⠀⠀⠀⠘⣿⡹⣿⠃⠀⢸⣧⡾⠏⠀⠀" << std::endl;
        std::cout << "⠀⠀⣠⣴⢿⣿⠀⠀⢹⡇⣿⡀⠀⠀⠀⠀⠀⠀⠀⣿⢱⡟⠀⠀⣸⡿⣶⣄⠀⠀" << std::endl;
        std::cout << "⠀⣴⠟⠁⠈⣿⣆⠀⣾⡇⣿⠃⢀⣶⠟⠻⢷⡄⠈⣿⠈⣿⠀⢠⣿⡇⠈⠻⣧⡀" << std::endl;
        std::cout << "⢸⡟⠀⠀⢰⡟⢻⣦⣹⡇⣿⡄⢸⣧⣴⣦⣼⡟⢀⣿⢰⣿⣰⡿⢹⣇⠀⠀⢹⣧" << std::endl;
        std::cout << "⢸⡇⠀⣰⡿⠁⠀⠙⢿⣧⣾⠇⠀⠀⠀⠀⠀⠀⠘⣿⣤⡿⠋⠀⠀⢻⣦⡀⢨⣿" << std::endl;
        std::cout << "⠸⣷⠿⠋⠀⠀⠀⠀⠀⠈⠙⠻⠶⢶⣦⣶⡶⠶⠟⠛⠉⠀⠀⠀⠀⠀⠙⠻⣾⡇" << std::endl;
        std::cout << " small girl cry : robotomy failed " << std::endl;
    }
}

void    RobotomyRequestForm::beSigned(const Bureaucrat& burocrat)
{
    if (burocrat.getGrade() <= this->GetRequiredGrade())
    {
        this->setFormatStatus(true);
        std::cout <<  "Status Format : " << this->GetAFormStatus() << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}

std::string RobotomyRequestForm::GetTarget(){
    return (target);
}