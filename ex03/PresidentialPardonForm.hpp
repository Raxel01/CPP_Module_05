/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:17:50 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/16 17:58:43 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT_HPP
#define PRESIDENT_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string Affecttarget);
        PresidentialPardonForm(const PresidentialPardonForm &Obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &Origine);
        void    beSigned(const Bureaucrat& burocrat);
        std::string GetTarget();
        ~PresidentialPardonForm();
};

#endif