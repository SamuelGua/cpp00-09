/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:16:26 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 12:03:26 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Character::Character()
{
	std::cout << GREEN << "Default constructor Character is called" << RESET << std::endl;
	this->name = "Character";
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
	std::cout << GREEN << "Constructor Character is called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(Character& copy)
{
	std::cout << GREEN << "Copy constructor Character is called" << RESET << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->materias[i] = copy.materias[i];
}

Character::~Character()
{
	std::cout << RED << "Destructor Character is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Character& Character::operator=(const Character& obj)
{
	if (this == &obj)
		return (*this);
	*this = obj;
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

std::string const& Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (this->materias[i] && i < 4)
		i++;
	if (i == 4)
	{
		std::cout << "Bag is full" << std::endl;
		return ;
	}
	this->materias[i] = m->clone();
	std::cout << this->materias[i]->getType() << " is add at place: ";
	std::cout << i << std::endl;
	return ;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrongs emplacement, there are only four emplacement" << std::endl;
	}
	if (this->materias[idx])
	{
		std::cout << "Materia " << this->materias[idx]->getType();
		std::cout << " at emplacement " << idx << " is now unequip" << std::endl; 
		this->materias[idx] = NULL;
	}
	else
		std::cout << "No materia at his emplacement: " << idx << std::endl; 
	return;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrongs emplacement, there are only four emplacement" << std::endl;
	}
	if (this->materias[idx])
		this->materias[idx]->use(target);
	else
		std::cout << "No materia at his place" << std::endl;
	return ;
}