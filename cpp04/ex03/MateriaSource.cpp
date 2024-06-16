/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:58:12 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 11:54:26 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

MateriaSource::MateriaSource()
{
	this->name = "MateriaSource";
	std::cout << GREEN << "Default constructor MateriaSource is called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}
MateriaSource::MateriaSource(std::string name)
{
	std::cout << GREEN << "Constructor MateriaSource is called" << RESET << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << GREEN << "Copy constructor MateriaSource is called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = copy.materias[i];
}

MateriaSource::~MateriaSource()
{
	std::cout << GREEN << "Destructor MateriaSource is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	if (this == &copy)
		*this = copy;
	return (*this);
}
/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void MateriaSource::learnMateria(AMateria* type)
{
	int i;

	while (!this->materias[i])
		i++;
	if (i > 3)
	{
		std::cout << "Bag is full" << std::endl;
		return ;
	}
	this->materias[i] = type;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	(void)type;
	std::cout << "createMateria is a incomplete function" << std::endl;
	return this->materias[0];
}
