/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:56:08 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/17 21:47:27 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "#" << std::setw(46) << "Intern Default Constructor Called " << std::setw(9) << "---]" << std::endl;
}

Intern::Intern(const Intern &Obj)
{
    std::cout << "#" << std::setw(43) << "Intern Copy Constructor Called "<< std::setw(12) << "---]" << std::endl;
    *this = Obj;
}

Intern::~Intern()
{
    std::cout << "#" << std::setw(40) << "Intern  Destructor  Called  " <<  std::setw(15) << "---]" << std::endl;
}

 Intern & Intern::operator=(const Intern &Origine)
{
    (void )Origine;
     std::cout << "#" << std::setw(51) << "Intern Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
     return (*this);
}

AForm*  Intern::makeForm(std::string FormName, std::string Target)
{
    typedef AForm* (Intern::*memberfunc)(std::string);
    memberfunc func[3] = {&Intern::Shrubbery,  &Intern::Robot, &Intern::President};
    
    std::string arr[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    int FormToCreat;
    int i (-1);
    while( ++i < 3)
    {
       if (FormName.compare(arr[i]) == 0){
                FormToCreat = i;
                break; 
        }
    }
    if (i == 3)
        throw NoSuitabName();
    switch (FormToCreat)
    {
    case 0:
        std::cout << "==>Intern creates  " <<  FormName << std::endl;
        return ((this->*func[0])(Target));
        break;
    case 1:
        std::cout << "==>Intern creates  " <<  FormName << std::endl;
        return ((this->*func[1])(Target));
        break;
    case 2:
        std::cout << "==>Intern creates  " <<  FormName << std::endl;
        return ((this->*func[2])(Target));
        break;
    default:
        throw NoPredectedError();
        break;
    }
    return (NULL);
}

const char* Intern::NoSuitabName::what ()  const throw(){
    return ("[--No Suitable name retry With another Valide Name--]");
}

const char* Intern::NoPredectedError::what ()  const throw(){
    return (" No Predected Error Occureeed What's Going on ?????? ");
}

AForm* Intern::Shrubbery(std::string Target)
{
    return (new ShrubberyCreationForm(Target));
}

AForm* Intern::Robot(std::string Target)
{
    return (new RobotomyRequestForm(Target));
}

AForm* Intern::President(std::string Target)
{
    return (new PresidentialPardonForm(Target));
}

