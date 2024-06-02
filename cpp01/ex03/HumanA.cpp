/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:08:15 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 17:40:06 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

HumanA::HumanA(std::string name, Weapon &arme) : name(name), arme(arme)
{
	return ;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->name;
	std::cout << " attacks with their ";
	std::cout << this->arme.geType() << std::endl;
	return ;
}
