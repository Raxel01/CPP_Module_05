/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:32:47 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/15 13:11:13 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

class Form
{
            
    private:
        std::string const name;
        bool              FormStatus;//1->Signed 0-> not Signed
        int const Requiredgrade;  // bureaucrat should have less than this Value
                     // to sign the Form;
        int const GradeToExecute;
    public :
        class GradeTooHighException : public std::exception{
            public :
                const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception{
            public :
                const char* what() const throw();
        };
        
        Form();
        
        Form(std::string const AffectName, int  AffectRequiredgrade, int  AffectGradeToExecute);
        
        Form(const Form& Obj);
        
        Form& operator=(const Form& Obj);
        
        ~Form();

         std::string   GetName() const;
         bool          GetFormStatus() const;
         int           GetRequiredGrade() const;
         int           GetGradeToExecute() const;
         void          beSigned(const Bureaucrat& burocrat);
};

std::ostream &operator <<(std::ostream &os, const Form  &Obj);

#endif