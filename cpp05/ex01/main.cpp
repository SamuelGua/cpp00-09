/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 11:06:45 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		try
		{
			Bureaucrat samuel("Samuel", 15);
			Form basic("Dofus", 15, 12);
			samuel.signForm(basic);
			basic.beSigned(samuel);
			samuel.signForm(basic);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "===========================" << std::endl;
	{
		try
		{
			Bureaucrat Kyks("Kyk's", 16);
			Form basic("Dofus", 15, 12);
			Kyks.signForm(basic);
			basic.beSigned(Kyks);
			Kyks.signForm(basic);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}