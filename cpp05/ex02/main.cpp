/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/02 18:57:45 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{		
		Bureaucrat samuel("Samuel", 15);
		// ShrubberyCreationForm hello("shu");
		RobotomyRequestForm bye("rob");
		
		// hello.beSigned(samuel);
		// hello.execute(samuel);
		// samuel.executeForm(hello);
		std::cout << "=================" << std::endl;
		bye.beSigned(samuel);
		bye.execute(samuel);
		samuel.executeForm(bye);
		
	}
	catch(const char *e)
	{
		std::cerr << e << '\n';
	}
	
}