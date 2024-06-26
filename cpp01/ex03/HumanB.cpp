/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:08:15 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 11:31:47 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack()
{
	std::cout << this->name;
	std::cout << " attacks with their ";
	if (this->arme == NULL)
	{
		std::cout << "hand" << std::endl;
		return ;
	}
	std::cout << this->arme->geType() << std::endl;
	return ;
}


void HumanB::setWeapon(Weapon &arme)
{
	this->arme = &arme;
	return ;
}