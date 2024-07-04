/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:03:04 by scely             #+#    #+#             */
/*   Updated: 2024/07/04 09:20:34 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm constructor is called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm("RobotomyRequestForm", 72, 45), target(copy.target)
{
    std::cout << "Shrubbery copy constructor is called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor is called" << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->issigned() == true && executor.getGrade() <= this->gradeToExecute())
    {
        std::srand(std::time(0));
        int n = std::rand();
        std::cout << this->target << " you are";
        std::cout << ((n % 2) ? " robotomized" : " not robotomized") << std::endl;
    }
    else 
		throw RobotomyRequestForm::GradeTooLowException();
}
