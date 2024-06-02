/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 13:40:30 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 15:13:18 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string &Weapon::geType(void)
{
	return (this->type);
}

void Weapon::setType( std::string type)
{
	this->type = type;
	return ;
}