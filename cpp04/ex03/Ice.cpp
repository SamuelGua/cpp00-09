/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:31:47 by scely             #+#    #+#             */
/*   Updated: 2024/06/16 11:52:32 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Ice::Ice()
{
	std::cout << GREEN << "Default constructor Ice is called" << RESET << std::endl;
	this->type = "Ice";
}
Ice::Ice(std::string name)
{
	std::cout << GREEN << "Constructor Ice is called" << RESET << std::endl;
	this->type = name;
}

Ice::Ice(const Ice& copy) : AMateria()
{
	std::cout << GREEN << "Copy constructor Ice is called" << RESET << std::endl;
	this->type = copy.type;
}

Ice::~Ice()
{
	std::cout << GREEN << "Destructor Ice is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Ice& Ice::operator=(const Ice& copy)
{
	if (this == &copy)
		*this = copy;
	return (*this);
}
/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

AMateria* Ice::clone() const
{
	std::cout << "This materia Ice is cloned" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}