/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:52:03 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/16 17:56:59 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm 
{
    private:
        std::string target;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string Affecttarget);
        ShrubberyCreationForm(const ShrubberyCreationForm &Obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &Origine);
        void    beSigned(const Bureaucrat& burocrat);
        std::string GetTarget();
        ~ShrubberyCreationForm();
};

#endif
    
