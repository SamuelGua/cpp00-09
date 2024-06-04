/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:22:39 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 18:45:45 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
	std::cout << "\033[3m";
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	std::cout << "\033[0m";
	return ;
}

void Harl::info(void)
{
	std::cout << "\033[3m";	
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	std::cout << "\033[0m";
	return ;
}

void Harl::warning(void)
{
	std::cout << "\033[3m";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "\033[0m";
	return ;
}

void Harl::error(void)
{
	std::cout << "\033[3m";
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << "\033[0m";
	return ;
}	

void Harl::complain(std::string level)
{
	std::string harl_message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funct_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (!harl_message[i].compare(level))
		{
			(this->*funct_ptr[i])();
			break;
		}
	}		
}
