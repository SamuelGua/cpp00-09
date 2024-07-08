/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/08 10:46:58 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "============ INITIALIZATION =======" << std::endl;
	{
		std::cout << "============ TOO HIGH =============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 0);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << " ok " << std::endl;
		}
	}
	{
		std::cout << "============ TOO LOW ==============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 151);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "============ CHANGEMENT ===========" << std::endl;
	{
		std::cout << "============ INCREMENT ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 1);
			foo.increment();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "============ DECREMENT ============" << std::endl;
		Bureaucrat foo("Foo", 150);
		try
		{
			foo.decrement();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "============ NORMAL ===============" << std::endl;
	{
		std::cout << "============ DECREMENT ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 1);
			for (int x = 148; x != 0; x--)	
				foo.decrement();
			std::cout << foo;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "============ INCREMENT ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 150);
			for (int x = 149; x != 0; x--)
				foo.increment();
			std::cout << foo;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	
}