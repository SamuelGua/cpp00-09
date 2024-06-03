/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:22:39 by scely             #+#    #+#             */
/*   Updated: 2024/06/03 09:12:54 by scely            ###   ########.fr       */
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

void Harl::complain(std::string level)
{
	std::string harl_message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funct_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	int i = 0;
	bool is_message = false;
	for (int x = 0; x < 4; x++)
	{
		if (!harl_message[x].compare(level))
			is_message = true;
	}
	if (!is_message)
	{
		std::cout << "[I'm too lazy, STOP COMPLAINING !!!]" << std::endl;
		return ;
	}
	while(is_message && i < 4)
	{
		(this->*funct_ptr[i])();
		if (!harl_message[i].compare(level))
			break;
		i++;
	}		
}
		
