/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 09:36:15 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 10:33:51 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void print(std::string str)
{
	int i;

	for (int x = 0; x + (int)str.length() < 10; x++)
	{
			std::cout << " ";
	}
	i = -1;
	if ((int)str.length() > 10)
	{
		while (++i < 9 && i < (int)str.length())
			std::cout << str[i];
	}
	else
	{
		while (++i < 10 && i < (int)str.length())
			std::cout << str[i];
	}
	if (str.length() > 10)
		std::cout << ".";
}

int add_phone(PhoneBook *directory)
{
	if (directory->add_new())
		return (1);
	return (0);
}

int search(PhoneBook *directory)
{
	directory->print_directory();
	return (0);
}

int main(void)
{
	PhoneBook directory;
	std::string input;

	while (1)
	{
		std::cout << "What should I do : ";
		if (!std::getline(std::cin, input))
			return (std::cout << std::endl, 1);
		if (!input.compare("ADD"))
		{
			if (add_phone(&directory))
				return (std::cout << std::endl, 1);
		}
		else if (!input.compare("SEARCH"))
		{
			if (search(&directory) == 1)
				return (std::cout << std::endl, 1);
		}
		else if (!input.compare("EXIT"))
			exit(0);
		else
			std::cout << "Wrongs input" << std::endl;
	}
	return (0);
}
