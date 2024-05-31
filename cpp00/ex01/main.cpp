/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 09:36:15 by scely             #+#    #+#             */
/*   Updated: 2024/05/31 21:41:09 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void print(std::string str)
{
	int i;

	i = -1;
	while (++i < 10 && i < (int)str.length())
		std::cout << str[i];
	if (str.length() > 9)
		std::cout << ".";
	else
	{
		while (i++ < 11)
			std::cout << " ";
	}
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
		std::cout << "? : ";
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
