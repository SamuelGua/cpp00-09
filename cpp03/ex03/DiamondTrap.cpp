/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:31:44 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 15:45:08 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

DiamondTrap::DiamondTrap() :  ClapTrap("ClapTrap_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << GREEN << "Default Constructor DiamondTrap is called" << RESET << std::endl;
	this->name = "DiamondTrap";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << GREEN << "Constructor DiamondTrap is called" << RESET << std::endl; 
	this->name = name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
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
		this->name = copy.name;
		this->attack_damage = copy.attack_damage;
		this->energy_points = copy.energy_points;
		this->hit_points = copy.hit_points;
	}
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void DiamondTrap::whoAmI()
{
	if (hit_points)
	{
		energy_points -= 1;
		std::cout << "My name is " << this->name << " or ";
		this->getClapName();
		std::cout << std::endl;
	}
	else
		std::cout << this->name << " is dead" << std::endl;
	return ;
}
