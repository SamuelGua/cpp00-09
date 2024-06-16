/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:02:40 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 11:48:08 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "ICharacter.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

AMateria::AMateria()
{
	std::cout << GREEN << "Default constructor AMateria is called" << RESET << std::endl;
	this->type = "AMateria";
}

AMateria::AMateria(std::string const & type)
{
	std::cout << GREEN << "Constructor AMateria is called" << RESET << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria &copy)
{
	std::cout << GREEN << "Copy constructor AMateria is called" << RESET << std::endl;
	*this = copy;
}

AMateria::~AMateria()
{
	std::cout << GREEN << "Destructor AMateria is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

AMateria& AMateria::operator=(const AMateria &obj)
{
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

std::string const & AMateria::getType() const 
{
	return (this->type);
}


void AMateria::use(ICharacter& target)
{
	std::cout << "* On " << target.getName() << " a none materia is used *" << std::endl;
}
