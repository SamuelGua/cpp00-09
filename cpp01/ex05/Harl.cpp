/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:22:39 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 23:07:41 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

typedef void (Harl::*map_function)();


Harl::Harl(/* args */)
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
	// if (message != func_tab.end())
	// {
	// 	map_function func = message->second;
	// 	(this->*func)();
	// }
	// else
	// 	std::cout << "I'm crazy has fuck" << std::endl;
		
}
