/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 22:13:33 by scely             #+#    #+#             */
/*   Updated: 2024/07/03 00:23:35 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef AForm* (*function_ptr)(std::string target);

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Intern::Intern()
{
}

Intern::Intern(const Intern & copy)
{
    (void)copy;
}

Intern::~Intern()
{
}
 
/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Intern &Intern::operator=(const Intern & copy)
{
    if (this != &copy)
    {
    }
    return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

AForm *getRobotomy(std::string target)
{
    AForm *form = new RobotomyRequestForm(target);
    return (form);
}

AForm *getShrubbery(std::string target)
{
    AForm *form = new ShrubberyCreationForm(target);
    return (form);
}

AForm *getPresidential(std::string target)
{
    AForm *form = new PresidentialPardonForm(target);
    return (form);
}

AForm *Intern::makeForm(std::string type, std::string target)
{
    std::string type_str[3] = {"presidential pardon", "shrubbery creation" ,"robotomy request"};
    function_ptr fptr[3] = {&getPresidential, &getShrubbery, &getRobotomy};
    for (int i = 0; i < 3; i++)
    {
        if (!type_str[i].compare(type.c_str()))
            return (fptr[i](target));
    }
    std::cerr << "Error: none function occurence" << std::endl;
    return (NULL);
}