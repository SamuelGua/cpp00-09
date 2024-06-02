/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:22:39 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 23:07:32 by scely            ###   ########.fr       */
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
	// std::map<std::string, map_function> func_tab;
	// func_tab["DEBUG"] = &Harl::debug;
	// func_tab["INFO"] = &Harl::info;
	// func_tab["WARNING"] = &Harl::warning;
	// func_tab["ERROR"] = &Harl::error;

	// std::map<std::string, map_function>::iterator message = func_tab.find(level);
	// std::map<std::string, map_function>::iterator bmessage = func_tab.begin();
	// while (bmessage != message)
	// {
	// 	map_function func = bmessage->second;
	// 	(this->*func)();
	// 	bmessage++;
	// }
	// if (bmessage == func_tab.end())
	// 	std::cout << "Wrongs message" << std::endl;
		
}
