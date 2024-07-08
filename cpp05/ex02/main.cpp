/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 23:27:04 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	std::cout << ORANGE << "================= Robotomy" << RESET << std::endl;
	try
	{		
		Bureaucrat samuel("Samuel", 15);
		RobotomyRequestForm bye("rob");
		bye.beSigned(samuel);
		bye.execute(samuel);
		samuel.executeForm(bye);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}	
	std::cout << ORANGE << "=================" << RESET << std::endl;
	try
	{		
		Bureaucrat samuel("Samuel", 15);
		ShrubberyCreationForm bye("Jade");
		bye.beSigned(samuel);
		bye.execute(samuel);
		samuel.executeForm(bye);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << ORANGE << "=================" << RESET << std::endl;
	try
	{		
		Bureaucrat samuel("Samuel", 15);
		PresidentialPardonForm bye("Presdi");
		bye.beSigned(samuel);
		bye.execute(samuel);
		samuel.executeForm(bye);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << ORANGE << "=================" << RESET << std::endl;
	try
	{		
		Bureaucrat samuel("Samuel", 5);
		PresidentialPardonForm bye("Presdi");
		bye.beSigned(samuel);
		bye.execute(samuel);
		samuel.executeForm(bye);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

}