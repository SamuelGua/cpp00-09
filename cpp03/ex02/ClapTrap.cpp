/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:55:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/07 05:40:18 by scely            ###   ########.fr       */
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
	this->attack_damage = 0;
	this->energy_points = 10;
	this->hit_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << GREEN << "Constructor ClapTrap is called" << RESET << std::endl; 
	this->name = name;
	this->attack_damage = 0;
	this->energy_points = 10;
	this->hit_points = 10;	
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
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
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

void ClapTrap::attack(const std::string &target)
{
	if (!hit_points)
		std::cout << this->name << " he is dead" << std::endl;
	else if (this->energy_points && this->hit_points)
	{
		this->energy_points -= 1;
		std::cout << this->name << " attacks " << target;
		std::cout << ", he left " << this->energy_points << " energy points" << std::endl;
	}
	else
		std::cout << this->name << "No more energy to do a action" << std::endl;
	return ;
}
void ClapTrap::takeDamage(unsigned int amount)
{	
	if ((int)amount <= this->hit_points)
	{
		this->hit_points -= amount;
		std::cout << this->name << " take " << amount << " damage";
		std::cout << ", he left " << this->hit_points << " points of health" << std::endl;
		return ;
	}
	this->hit_points = 0;
	std::cout << this->name << " is now dead" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!hit_points)
		std::cout << this->name << " he is dead" << std::endl;
	else if (this->energy_points)
	{
		this->energy_points -= 1;
		this->hit_points += amount;
		std::cout << this->name << " you gain " << amount << " of healing,";
		std::cout  << " now you have " << this->hit_points;
		std::cout << ", he left " << this->energy_points << " energy points" << std::endl;		
	}
	else
		std::cout << this->name << " has no more energy to do a action" << std::endl;
	return ;
}
