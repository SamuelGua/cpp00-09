/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:08:41 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 14:21:00 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

ScavTrap::ScavTrap()
{
	std::cout << GREEN << "Default Constructor ScavTrap is called" << RESET << std::endl;
	this->name = "Scavtrap";
	this->attack_damage = 20;
	this->hit_points = 100;
	this->energy_points = 50;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << GREEN << "Constructor ScavTrap is called" << RESET << std::endl; 
	this->name = name;
	this->attack_damage = 20;
	this->hit_points = 100;
	this->energy_points = 50;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
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
	if (!hit_points)
		std::cout << this->name << " he is dead" << std::endl;
	else if (energy_points)
	{
		this->energy_points -= 1;
		std::cout << this->name << " is now in Gate keeper mode. ";
		std::cout << "Now you have only " << this->energy_points << " energy point" << std::endl;
	}
	else
		std::cout << this->name << " no more energy to do a action" << std::endl;
	return ;
}

void ScavTrap::attack(const std::string &target)
{
	if (!hit_points)
		std::cout << this->name << " he is dead" << std::endl;
	else if (this->energy_points && this->hit_points)
	{
		this->energy_points -= 1;
		std::cout << this->name << " attacks in a SCAV_MODE " << target;
		std::cout << ", he left " << this->energy_points << " energy points" << std::endl;
	}
	else
		std::cout << this->name << " no more energy to do a action" << std::endl;
	return ;
}
