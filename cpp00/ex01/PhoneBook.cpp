/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 09:07:11 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 09:19:21 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void)
{
	PhoneBook::_index = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}
bool PhoneBook::add_new(void)
{
	if (this->contact[PhoneBook::_index].set_value())
		return(1);
	PhoneBook::_index++;
	if (PhoneBook::_index == 8)
		PhoneBook::_index = 0;
	return(0);
}

void PhoneBook::print_directory(void)
{
	int			i;
	std::string input;

	i = -1;
	std::cout << " =============================================" << std::endl;
	std::cout << " | INDEX |   FIRST   |   LAST    | NICKNAME  |" << std::endl;
	std::cout << " =============================================" << std::endl;
	while (++i < 8)
		this->contact[i].print_contact(i);
	std::cout << " =============================================" << std::endl;
	std::cout << "Enter a index : ";
	if (!std::getline(std::cin, input))
	{
			std::cout << std::endl;
			return ;
	}
	i = std::atoi(input.c_str()) - 1;
	if (i > 7 || i < 0)
		std::cerr << "Incorret numbers" << std::endl;
	else if (this->contact[i].print_contact(i))
			std::cout << "Is empty" << std::endl;
	return ;
}
