/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 22:33:19 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << ORANGE << "============ INITIALIZATION =======" << RESET << std::endl;
	{
		std::cout << ORANGE << "============ TOO HIGH =============" << RESET << std::endl;
		try
		{
			Bureaucrat foo("Foo", 0);
		}
		catch (std::exception& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << ORANGE << "============ TOO LOW ==============" << RESET << std::endl;
		try
		{
			Bureaucrat foo("Foo", 151);
		}
		catch (std::exception& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << ORANGE << "============ CHANGEMENT ===========" << RESET << std::endl;
	{
		std::cout << ORANGE << "============ INCREMENT ============" << RESET << std::endl;
		try
		{
			Bureaucrat foo("Foo", 1);
			foo.increment();
		}
		catch (std::exception& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << ORANGE << "============ DECREMENT ============" << RESET << std::endl;
		Bureaucrat foo("Foo", 150);
		try
		{
			foo.decrement();
		}
		catch (std::exception& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << ORANGE << "============ NORMAL ===============" << RESET << std::endl;
	{
		std::cout << ORANGE << "============ DECREMENT ============" << RESET << std::endl;
		try
		{
			Bureaucrat foo("Foo", 1);
			for (int x = 148; x != 0; x--)	
				foo.decrement();
			std::cout << foo;
		}
		catch (std::exception& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << ORANGE << "============ INCREMENT ============" << RESET << std::endl;
		try
		{
			Bureaucrat foo("Foo", 150);
			for (int x = 149; x != 0; x--)
				foo.increment();
			std::cout << foo;
		}
		catch (std::exception& e)
		{
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}

	
}