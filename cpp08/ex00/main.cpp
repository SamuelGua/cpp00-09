/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:47:37 by scely             #+#    #+#             */
/*   Updated: 2024/07/25 17:05:44 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	try
	{	
		std::vector<int> tab;
		tab.push_back(9);
		tab.push_back(4);
		tab.push_back(8);
		tab.push_back(5);
		tab.push_back(9);
		tab.push_back(9);
		std::vector<int>::iterator sc = easyfind(tab, 9);
		sc++;
		std::cout << "Found: " << *sc << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}