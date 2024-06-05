/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 09:07:18 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 10:20:41 by scely            ###   ########.fr       */
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
	bool		printable;
	bool		is_num;
	std::string	str_tmp;

	while (1)
	{
		printable = true;
		is_num = true;

		std::cout << to_print;
		if (!std::getline(std::cin, *str))
			return (1);
		str_tmp = *str;
		for (int i = 0; i < (int)str_tmp.length(); i++)
		{
			if (!std::isprint(str_tmp[i]))
				printable = false;
		}
		if (!to_print.compare("Phone number : "))
		{
			for(int i = 0; i < (int)str_tmp.length(); i++)
				if (str_tmp.length() != 10 || !std::isdigit(str_tmp[i]))
					is_num = false;
		}
		if (!is_num || !printable || str_tmp[0] == 32 || (str_tmp[0] >= 7 && str_tmp[0] <= 13)
			|| str_tmp.empty())
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

int Contact::get_contact( void )
{
	if (this->first_name.empty())
		return (1);
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
	std::cout << "Darkest secret : " << this->darkest_secret << std::endl;
	return (0);
}
