/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:57:47 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:42:55 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Animal::Animal(std::string type)
{
	std::cout << GREEN << "Constructor Animal is called" << RESET << std::endl;
	this->type = type;
}

Animal::Animal()
{
	std::cout << GREEN << "Default constructor Animal is called" << RESET << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &copy)
{
	std::cout << GREEN << "Copy constructor Animal is called" << RESET << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << RED <<"Destructor Animal is called" << RESET << std::endl;
}
// virtual Animal::~Animal()
// {
// 	std::cout << RED <<"Destructor Animal is called" << RESET << std::endl;
// }

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Animal& Animal::operator=(const Animal& copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void Animal::makeSound() const 
{
	std::cout << this->type << " make a sound: webwufbqfefqofq" <<std::endl;
}

std::string Animal::getType() const 
{
	return (this->type);
}