/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:08:41 by scely             #+#    #+#             */
/*   Updated: 2024/06/06 18:46:44 by scely            ###   ########.fr       */
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
	this->attack_p = 20;
	this->health_p = 100;
	this->energy_p = 50;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << GREEN << "Constructor ScavTrap is called" << RESET << std::endl; 
	this->name = name;
	this->attack_p = 20;
	this->health_p = 100;
	this->energy_p = 50;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
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
		this->attack_p = copy.attack_p;
		this->energy_p = energy_p;
		this->health_p = health_p;
	}
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void ScavTrap::guardGate()
{
	if (!health_p)
		std::cout << this->name << " he is dead" << std::endl;
	else if (energy_p)
		std::cout << this->name << " is now in Gate keeper mode" << std::endl;
	else
		std::cout << this->name << " no more energy to do a action" << std::endl;
	return ;
}
