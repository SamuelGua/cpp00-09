/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:16:54 by scely             #+#    #+#             */
/*   Updated: 2024/06/07 05:34:27 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

FragTrap::FragTrap()
{
	std::cout << GREEN << "Default Constructor FragTrap is called" << RESET << std::endl;
	this->name = "FragTrap";
	this->attack_damage = 30;
	this->energy_points = 100;
	this->hit_points = 100;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << GREEN << "Constructor FragTrap is called" << RESET << std::endl; 
	this->name = name;
	this->attack_damage = 30;
	this->energy_points = 100;
	this->hit_points = 100;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap() 
{
	std::cout << GREEN << "Copy connstructor FragTrap is called" << RESET << std::endl; 
	if(this != &copy)
		*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "Destructor FragTrap is called" << RESET << std::endl;
	return ;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	if (this != &copy)
	{
		this->name = name;
		this->attack_damage = copy.attack_damage;
		this->energy_points = copy.energy_points;
		this->hit_points = copy.hit_points;
	}
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void FragTrap::highFivesGuys()
{
	if (!hit_points)
		std::cout << this->name << " he is dead" << std::endl;
	else if (energy_points)
		std::cout << this->name << " 😁 positive high fives 🙌" << std::endl;
	else
		std::cout << this->name << " has no more energy to do a action" << std::endl;
	return ;	
}