/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:55:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/05 19:10:22 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << GREEN << "Constructor ClapTrap is called" << RESET << std::endl; 
	this->name = name;
	this->attack_p = 0;
	this->energy_p = 10;
	this->health_p = 10;
	
	return ;
}

void ClapTrap::attack(const std::string &target)
{
	if (!health_p)
		std::cout << this->name << " he is dead" << std::endl;
	else if (this->energy_p && this->health_p)
	{
		this->energy_p -= 1;
		std::cout << this->name << " attacks " << target;
		std::cout << ", he left " << this->energy_p << " energy points" << std::endl;
	}
	else
		std::cout << this->name << "No more energy to do a action or he is dead" << std::endl;
	return ;
}
void ClapTrap::takeDamage(unsigned int amount)
{	
	if ((int)amount <= this->health_p)
	{
		this->health_p -= amount;
		std::cout << this->name << " take " << amount << " damage";
		std::cout << ", he left " << this->health_p << " points of health" << std::endl;
		return ;
	}
	this->health_p = 0;
	std::cout << this->name << " is now dead" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!health_p)
		std::cout << this->name << " he is dead" << std::endl;
	else if (this->energy_p)
	{
		this->energy_p -= 1;
		this->health_p += amount;
		std::cout << this->name << " you gain " << amount << " of healing,";
		std::cout  << " now you have " << this->health_p;
		std::cout << ", he left " << this->energy_p << " energy points" << std::endl;		
	}
	else
		std::cout << this->name << " has no more energy to do a action" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor ClapTrap is called" << RESET << std::endl;
	return ;
}
