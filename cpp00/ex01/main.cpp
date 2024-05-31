/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 09:36:15 by scely             #+#    #+#             */
/*   Updated: 2024/05/31 14:44:59 by scely            ###   ########.fr       */
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

void print_contact(Contact *contact)
{
	print(contact->first_name);
	std::cout << "|";
	print(contact->last_name);
	std::cout << "|";
	print(contact->nickname);
	std::cout << "|";
	std::cout << std::endl;
}

int search(PhoneBook *directory)
{
	int i;

	i = -1;
	std::string input;
	std::cout << " =============================================" << std::endl;
	std::cout << " | INDEX |   FIRST   |   LAST    | NICKNAME  |" << std::endl;
	std::cout << " =============================================" << std::endl;
	while (++i < 8)
	{
		if (!directory->contact[i].first_name.empty())
		{
			std::cout << " |   " << i + 1 << "   |";
			print_contact(&directory->contact[i]);
		}
	}
	std::cout << " =============================================" << std::endl;
	std::cout << "Index : ";
	if (!std::getline(std::cin, input))
		return (1);
	for (int x = 0; x < (int)input.length(); x++)
	{
		if (!std::isdigit(input[x]))
		{
			std::cerr << "Wrong input" << std::endl;
			return (2);
		}
	}
	i = std::atoi(input.c_str()) - 1;
	if (i > 7 || i < 0)
		std::cerr << "Incorret numbers" << std::endl;
	else
	{
		if (directory->contact[i].first_name.length() == 0)
		{
			std::cout << "Is empty" << std::endl;
			return (0);
		}
		std::cout << i + 1 << " |";
		print_contact(&directory->contact[i]);
	}
	return (0);
}
int set_value(std::string *str, std::string to_print)
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

int add_new(PhoneBook *directory, int *i)
{
	// faire une boucle, tant que c'est vide faire un appel a getline ou si il y a des non printable carateres

	if (set_value(&directory->contact[*i].first_name, "First name : "))
		return (1);
	if (set_value(&directory->contact[*i].last_name, "Last name : "))
		return (1);
	if (set_value(&directory->contact[*i].nickname, "Nickname name : "))
		return (1);
	if (set_value(&directory->contact[*i].phone_number, "Phone number : "))
		return (1);
	if (set_value(&directory->contact[*i].darkest_secret, "Darkest secret : "))
		return (1);
	*i += 1;
	if (*i++ > 7)
		*i = 0;
	return (0);
}

int main(void)
{
	PhoneBook directory;
	int i;
	std::string input;

	i = 0;
	while (1)
	{
		std::cout << "? : ";
		if (!std::getline(std::cin, input))
			return (std::cout << std::endl, 1);
		if (!input.compare("ADD"))
		{
			if (add_new(&directory, &i) == 1)
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
	print(directory.contact->first_name);
	return (0);
}
