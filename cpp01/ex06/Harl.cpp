/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:22:39 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 18:43:28 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

typedef void (Harl::*map_function)();


Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "\033[3;32m";
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	std::cout << "\033[0m";
	return ;
}
void Harl::info(void)
{
	std::cout << "\033[3;33m";	
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << "\033[0m";
	return ;
}
void Harl::warning(void)
{
	std::cout << "\033[3;38;5;208m";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "\033[0m";
	return ;
}
void Harl::error(void)
{
	std::cout << "\033[1;3;31m";
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << "\033[0m";
	return ;
}

void Harl::complain(std::string level)
{
	std::string harl_message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funct_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	int i = 0;
	bool is_message = false;

	while(i < 4)
	{
		if (!harl_message[i].compare(level))
		{
			is_message = true;
			break;
		}
		i++;
	}
	if (!is_message)
		i = -1;
	switch (i)
	{
		case 0:
			(this->*funct_ptr[i])();
			i++;
		case 1:
			(this->*funct_ptr[i])();
			i++;
		case 2:
			(this->*funct_ptr[i])();
			i++;
		case 3:
			(this->*funct_ptr[i])();
			i++;
			break;
		default:
			std::cout << "[I'm too lazy, STOP COMPLAINING !!!]" << std::endl;
			break;
	}	
}
		
