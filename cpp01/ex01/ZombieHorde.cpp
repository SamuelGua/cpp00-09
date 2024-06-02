/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:56:14 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 10:04:42 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
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

