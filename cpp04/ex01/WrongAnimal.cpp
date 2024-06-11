/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:57:47 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:26:43 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << GREEN << "Constructor WrongAnimal is called" << RESET << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal()
{
	std::cout << GREEN << "Default constructor WrongAnimal is called" << RESET << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << GREEN << "Copy constructor WrongAnimal is called" << RESET << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED <<"Destructor WrongAnimal is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void WrongAnimal::makeSound() const 
{
	std::cout << this->type << " make a sound: webwufbqfefqofq" <<std::endl;
}

std::string WrongAnimal::getType() const 
{
	return (this->type);
}