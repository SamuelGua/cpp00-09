/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:55:42 by scely             #+#    #+#             */
/*   Updated: 2024/07/02 18:43:21 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "Shrubbery constructor is called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137), target(copy.target)
{
    std::cout << "Shrubbery copy constructor is called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery destructor is called" << std::endl;
}


/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

// ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const& copy)
// {
// }

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->issigned() == true && executor.getGrade() <= this->gradeToExecute())
    {
        std::fstream fs;
        std::string file = this->target + "_shrubbery";
        fs.open(file.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
        if (!fs.is_open())
        {
            std::cerr << "fail to open:" << file << std::endl;
            return ;
        }
        fs << "*   *" << std::endl;
        fs << " *** " << std::endl;
        fs << "  *  " << std::endl;
        fs << "  *  " << std::endl;
    }
    else 
		throw "ShrubberyCreationForm::GradeTooLowException";
}

