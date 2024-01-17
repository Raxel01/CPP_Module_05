/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:37:34 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/17 13:33:39 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PardonForm", 25, 5)
{
    std::cout << "#" << std::setw(46) << "PresidentialPardonForm Default Constructor Called " << std::setw(9) << "---]" << std::endl;
    this->target = "Default Target";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &Obj) : AForm(Obj.GetName(), Obj.GetRequiredGrade(), Obj.GetGradeToExecute())
{
    std::cout << "#" << std::setw(43) << "PresidentialPardonForm Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    this->setFormatStatus(Obj.GetAFormStatus());
    this->target = Obj.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "#" << std::setw(40) << "PresidentialPardonForm  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &Origine)
{
    std::cout << "#" << std::setw(51) << "PresidentialPardonForm Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
    if (this != &Origine)
    {
        AForm::operator=(Origine);
        this->target = Origine.target;
    } 
     return (*this);
}

void    PresidentialPardonForm::beSigned(const Bureaucrat& burocrat)
{
    if (burocrat.getGrade() <= this->GetRequiredGrade())
    {
        this->setFormatStatus(true);
        std::cout <<  "Status Format : " << this->GetAFormStatus() << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(std::string Affecttarget) :AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "#" << std::setw(43) << "PresidentialPardonForm Parametried Constructor Called " << std::setw(12) << "---]" << std::endl;
    this->target = Affecttarget;
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox "<< std::endl;
}

std::string PresidentialPardonForm::GetTarget(){
    return (target);
}
