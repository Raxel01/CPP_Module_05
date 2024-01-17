/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:32:47 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/15 13:11:13 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Bureaucrat.hpp"

class AForm
{   
    private:
        std::string const name;
        bool              AFormStatus;//1->Signed 0-> not Signed
        int const Requiredgrade;  // bureaucrat should have less than this Value
                     // to sign the AForm;
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
        AForm();
        
        AForm(std::string const AffectName, int  AffectRequiredgrade, int  AffectGradeToExecute);
        
        AForm(const AForm& Obj);
        
        AForm& operator=(const AForm& Obj);
        
        ~AForm();

        std::string   GetName()           const                  ;
        bool          GetAFormStatus()    const                  ;
        int           GetRequiredGrade()  const                  ;
        int           GetGradeToExecute() const                  ;
        void          setFormatStatus(bool status)               ;
        void          execute(Bureaucrat const & executor) const;
        virtual void  beSigned(const Bureaucrat& burocrat) = 0   ;
};

std::ostream &operator <<(std::ostream &os, const AForm  &Obj);

#endif