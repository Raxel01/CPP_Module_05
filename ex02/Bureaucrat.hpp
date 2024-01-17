/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:27:14 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/17 14:12:26 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <exception>

class AForm;
class   Bureaucrat
{
    private :
        int                 grade; // 1 big Value | 150 min Value
        const std::string   name;
    public  :
        Bureaucrat();
        Bureaucrat(const Bureaucrat& Obj);
        Bureaucrat& operator=(const Bureaucrat& Obj);
        Bureaucrat(int GradeToAssign, std::string NameToAssign);
        const std::string getName() const;
        int             getGrade() const;
        class GradeTooHighException : public std::exception{
            public :
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public :
                const char* what() const throw();
        };
        void    executeForm(AForm const & form);
        void    increment();
        void    decrement();
        void    signAForm(AForm& AFormObj);
        

        ~Bureaucrat();
};

std::ostream &operator <<(std::ostream &os, const Bureaucrat  &Obj);
#endif