/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:31:44 by scely             #+#    #+#             */
/*   Updated: 2024/06/06 23:36:37 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

DiamondTrap::DiamondTrap()
{
	std::cout << GREEN << "Default Constructor DiamondTrap is called" << RESET << std::endl;
	this->name = "DiamondTrap";
	this->health_p = FragTrap::health_p;
	this->energy_p = ScavTrap::energy_p;
	this->attack_p = FragTrap::attack_p;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << GREEN << "Constructor DiamondTrap is called" << RESET << std::endl; 
	this->name = name + "_clap_name";
	this->health_p = FragTrap::health_p;
	this->energy_p = ScavTrap::energy_p;
	this->attack_p = FragTrap::attack_p;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << GREEN << "Copy connstructor DiamondTrap is called" << RESET << std::endl; 
	if (this != &copy)
		*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED << "Destructor DiamondTrap is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
	if (this != &copy)
	{
		this->attack_p = copy.attack_p;
		this->energy_p = copy.energy_p;
		this->health_p = copy.health_p;
	}
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void DiamondTrap::whoAmI()
{
	if (!health_p)
		std::cout << this->name << " he is dead" << std::endl;
	else if (energy_p)
	{
		energy_p -= 1;
		std::cout << this->name << " is my name, but where I am really a Frag ? a Trap ? or a FrapTrag ?" << std::endl;
	}
	else
		std::cout << this->name << " has no more energy to do a action" << std::endl;
	return ;
}