/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 09:07:18 by scely             #+#    #+#             */
/*   Updated: 2024/05/31 21:32:25 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

int insert_value(std::string *str, std::string to_print)
{
	bool printable;
	std::string str_tmp;

	while (1)
	{
		printable = true;
		std::cout << to_print;
		if (!std::getline(std::cin, *str))
			return (1);
		str_tmp = *str;
		for (int i = 0; i < (int)str_tmp.length(); i++)
		{
			if (!std::isprint(str_tmp[i]))
				printable = false;
		}
		if (!printable || str_tmp.empty())
		{
			std::cout << "Wrongs input" << std::endl;
			continue;
		}
		else
			return (0);
	}
	return (0);
}

int Contact::print_contact(int i)
{
	if (this->first_name.empty())
		return (1);
	std::cout << " |   " << i + 1 << "   |";
	print(this->first_name);
	std::cout << "|";
	print(this->last_name);
	std::cout << "|";
	print(this->nickname);
	std::cout << "|";
	std::cout << std::endl;
	return (0);
}
bool Contact::set_value( void )
{

	if (insert_value(&this->first_name, "First name : "))
		return (1);
	if (insert_value(&this->last_name, "Last name : "))
		return (1);
	if (insert_value(&this->nickname, "Nickname name : "))
		return (1);
	if (insert_value(&this->phone_number, "Phone number : "))
		return (1);
	if (insert_value(&this->darkest_secret, "Darkest secret : "))
		return (1);
	return (0);
}
