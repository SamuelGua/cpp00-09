/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:55:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/06 22:16:17 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

ClapTrap::ClapTrap()
{
	std::cout << GREEN << "Default Constructor ClapTrap is called" << RESET << std::endl; 
	this->name = "ClapTrap";
	this->attack_p = 0;
	this->energy_p = 10;
	this->health_p = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << GREEN << "Constructor ClapTrap is called" << RESET << std::endl; 
	this->name = name;
	this->attack_p = 0;
	this->energy_p = 10;
	this->health_p = 10;	
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << GREEN << "Copy connstructor ClapTrap is called" << RESET << std::endl; 
	if (this !=  &copy)
		*this = copy;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor ClapTrap is called" << RESET << std::endl;
	return ;
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                  */
/**************************************************************************************/

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->attack_p = copy.attack_p;
		this->energy_p = copy.energy_p;
		this->health_p = copy.health_p;
	}
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/



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
