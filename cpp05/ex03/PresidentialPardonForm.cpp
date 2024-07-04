/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:59:00 by scely             #+#    #+#             */
/*   Updated: 2024/07/04 09:20:24 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "PresidentialPardonForm constructor is called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm("PresidentialPardonForm", 25, 5), target(copy.target)
{
    std::cout << "Shrubbery copy constructor is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
    if (this != &copy)
    {
        static_cast<std::string> (this->target) = copy.target;
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