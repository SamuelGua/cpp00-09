/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:16:54 by scely             #+#    #+#             */
/*   Updated: 2024/06/06 22:40:00 by scely            ###   ########.fr       */
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
	this->attack_p = 30;
	this->energy_p = 100;
	this->health_p = 100;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << GREEN << "Constructor FragTrap is called" << RESET << std::endl; 
	this->name = name;
	this->attack_p = 30;
	this->energy_p = 100;
	this->health_p = 100;
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
		this->attack_p = copy.attack_p;
		this->energy_p = copy.energy_p;
		this->health_p = copy.health_p;
	}
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void FragTrap::highFivesGuys()
{
	if (!health_p)
		std::cout << this->name << " he is dead" << std::endl;
	else if (energy_p)
		std::cout << this->name << " 😁 positive high fives 🙌" << std::endl;
	else
		std::cout << this->name << " has no more energy to do a action" << std::endl;
	return ;	
}