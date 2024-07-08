/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 23:41:59 by scely            ###   ########.fr       */
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
	std::cout << ORANGE << "=========================== ROBOTOMY ======================" << RESET << std::endl;
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;
			Bureaucrat foo("Samuel", 1);
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			rrf->beSigned(foo);
			if (rrf == NULL)
				return (0);
			rrf->execute(foo);
			rrf->execute(foo);
			rrf->execute(foo);
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}			
	}
	
	std::cout << ORANGE << "=========================== Presidential =================" << RESET << std::endl;
	{
		try
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
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
	std::cout << ORANGE << "=========================== shrubbery ====================" << RESET << std::endl;
	{
		try
		{
			Intern someRandomIntern;
			AForm* rrf;
			Bureaucrat foo("Samuel", 1);
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			rrf->beSigned(foo);
			if (rrf == NULL)
				return (0);
			rrf->execute(foo);
			std::cout << "The tree is created" << std::endl;
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
}