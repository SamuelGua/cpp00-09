/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:36:04 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/12 15:01:47 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>
#include <stddef.h>


int main()
{
	std::cout << "=============================" << std::endl;
	{		
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "=============================" << std::endl;
	{
		Span sp = Span(15);
		std::list<unsigned int> list;
		for (size_t i = 0; i < 10; i++)
			list.push_back(i);
		sp.append_range(list);
		sp.print();
	}
	std::cout << "=============================" << std::endl;
	{
		Span sp = Span(5);
		try
		{
			sp.addNumber(5);
			sp.print();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "=============================" << std::endl;
	{
		Span sp = Span(5);
		std::list<unsigned int> list;
		list.push_back(647);
		list.push_back(5);
		list.push_back(157);
		list.push_back(127);
		try
		{
			sp.append_range(list);
			sp.print();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0; 
}