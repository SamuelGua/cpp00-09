/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:22:21 by marie-evece       #+#    #+#             */
/*   Updated: 2024/06/30 17:38:09 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "============ INITIALIZATION ============" << std::endl;
	{
		std::cout << "============ TOO HIGH ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 0);
		}
		catch (const char *e)
		{
			std::cout << e << std::endl;
		}
	}
	{
		std::cout << "============ TOO LOW ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 151);
		}
		catch (const char *e)
		{
			std::cout << e << std::endl;
		}
	}
	std::cout << "============ CHANGEMENT ============" << std::endl;
	{
		std::cout << "============ INCREMENT ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 1);
			foo.increment();
		}
		catch (const char *e)
		{
			std::cout << e << std::endl;
		}
	}
	{
		std::cout << "============ DECREMENT ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 150);
			foo.decrement();
		}
		catch (const char *e)
		{
			std::cout << e << std::endl;
		}
	}
	std::cout << "============ NORMAL ============" << std::endl;
	{
		std::cout << "============ INCREMENT ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 1);
			for (int x = 148; x != 0; x--)	
				foo.decrement();
			std::cout << foo;
		}
		catch (const char *e)
		{
			std::cout << e << std::endl;
		}
	}
	{
		std::cout << "============ DECREMENT ============" << std::endl;
		try
		{
			Bureaucrat foo("Foo", 150);
			for (int x = 149; x != 0; x--)
				foo.increment();
			std::cout << foo;
		}
		catch (const char *e)
		{
			std::cout << e << std::endl;
		}
	}

	
}