/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:08:41 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 15:20:26 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

ScavTrap::ScavTrap()
{
	std::cout << GREEN << "Default Constructor ScavTrap is called" << RESET << std::endl;
	this->name = ClapTrap::name;
	this->energy_points = 50;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << GREEN << "Constructor ScavTrap is called" << RESET << std::endl; 
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap()
{
	std::cout << GREEN << "Copy connstructor ScavTrap is called" << RESET << std::endl; 
	if (this != &copy)
		*this = copy;
	return ;
}


ScavTrap::~ScavTrap()
{
	std::cout << RED << "Destructor ScavTrap is called" << RESET << std::endl;
	return ;	
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->attack_damage = copy.attack_damage;
		this->energy_points = energy_points;
		this->hit_points = hit_points;
	}
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void ScavTrap::guardGate()
{
	if (hit_points)
		std::cout << this->name << " is now in Gate keeper mode" << std::endl;
	else
		std::cout << this->name << " is dead" << std::endl;
	return ;
}

int ScavTrap::getEnergy()
{
	return (this->energy_points);
}
