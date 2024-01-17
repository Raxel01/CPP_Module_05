/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:56:08 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/17 16:56:09 by abait-ta         ###   ########.fr       */
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
     std::cout << "#" << std::setw(51) << "Intern Copy assignment Operator Called "<< std::setw(4) << "---]" << std::endl;
     return (*this);
 }

