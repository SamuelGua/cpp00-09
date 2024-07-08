/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:55:42 by scely             #+#    #+#             */
/*   Updated: 2024/07/08 23:36:09 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137), target(copy.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
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
		throw ShrubberyCreationForm::GradeTooLowException();
}

