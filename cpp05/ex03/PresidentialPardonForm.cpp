/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:59:00 by scely             #+#    #+#             */
/*   Updated: 2024/07/08 23:35:57 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm("PresidentialPardonForm", 25, 5), target(copy.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
    if (this != &copy)
    {
        const_cast<std::string&> (this->target) = copy.target;
    }
    return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->issigned() == true && executor.getGrade() <= this->gradeToExecute())
    {
        std::cout << this->target << ": has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
    else 
		throw PresidentialPardonForm::GradeTooLowException();
}