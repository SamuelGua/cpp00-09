/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:03:04 by scely             #+#    #+#             */
/*   Updated: 2024/07/08 23:36:03 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>

static bool renew = false;

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm("RobotomyRequestForm", 72, 45), target(copy.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
    if (this != &copy)
    {
        const_cast<std::string& > (this->target) = copy.target;
    }
    return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->issigned() == true && executor.getGrade() <= this->gradeToExecute())
    {
        if (!renew)
        {
            std::srand(std::time(0));
            renew = true;
        }   
        int n = std::rand();
        std::cout << this->target << " you are";
        std::cout << ((n % 2) ? " robotomized" : " not robotomized") << std::endl;
    }
    else 
		throw RobotomyRequestForm::GradeTooLowException();
}
