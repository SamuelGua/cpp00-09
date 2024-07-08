/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 13:56:07 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
	std::cout << "=========================== ROBOTOMY ===============================" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat foo("Samuel", 1);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(foo);
		if (rrf == NULL)
			return (0);
		rrf->execute(foo);
		delete rrf;
	}
	std::cout << "=========================== Presidential ===============================" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat foo("Samuel", 1);
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf->beSigned(foo);
		if (rrf == NULL)
			return (0);
		rrf->execute(foo);
		delete rrf;
	}
	std::cout << "=========================== shrubbery ===============================" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat foo("Samuel", 1);
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf->beSigned(foo);
		if (rrf == NULL)
			return (0);
		rrf->execute(foo);
		delete rrf;
	}
}