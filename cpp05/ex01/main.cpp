/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 22:58:28 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << ORANGE << "===========================" << RESET << std::endl;
	{
		try
		{
			Bureaucrat sam("Samuel", 15);
			Form basic("Dofus", 15, 12);
			sam.signForm(basic);
			basic.beSigned(sam);
			sam.signForm(basic);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << ORANGE << "===========================" << RESET << std::endl;
	{
		try
		{
			Bureaucrat Kyks("Kyk's", 16);
			Form basic("Dofus", 14, 1);
			Kyks.signForm(basic);
			basic.beSigned(Kyks);
			Kyks.signForm(basic);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
	}
}