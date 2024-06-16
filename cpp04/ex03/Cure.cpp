/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:31:47 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 11:52:38 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Cure::Cure()
{
	std::cout << GREEN << "Default constructor Cure is called" << RESET << std::endl;
	this->type = "Cure";
}
Cure::Cure(std::string name)
{
	std::cout << GREEN << "Constructor Cure is called" << RESET << std::endl;
	this->type = name;
}

Cure::Cure(const Cure& copy) : AMateria()
{
	std::cout << GREEN << "Copy constructor Cure is called" << RESET << std::endl;
	this->type = copy.type;
}

Cure::~Cure()
{
	std::cout << GREEN << "Destructor Cure is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Cure& Cure::operator=(const Cure& copy)
{
	if (this == &copy)
		*this = copy;
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	std::cout << "This materia Cure is cloned" << std::endl;
	return new Cure(*this);
}
