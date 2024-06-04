/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:56:14 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 14:50:09 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead" << std::endl;
	return ;
}

void Zombie::setname(std::string name)
{
	this->name = name;
	return ;
}

void Zombie::announce()
{
	std::cout << this->name << ": member of the horde." << std::endl;
	return ;
}

