/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:27:14 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/15 15:01:04 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <exception>

class Form;
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
        void    increment();
        void    decrement();
        void    signForm(Form& FormObj);
        

        ~Bureaucrat();
};

std::ostream &operator <<(std::ostream &os, const Bureaucrat  &Obj);
#endif