/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:39:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:32:19 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Dog::Dog()
{
	std::cout << GREEN << "Default constructor Dog is called" << RESET << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string name)
{
	std::cout << GREEN << "Constructor Dog is called" << RESET << std::endl;
	this->type = name;
}

Dog::Dog(Dog &copy)
{
	std::cout << GREEN << "Copy constructor Dog is called" << RESET << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << RED << "Destructor Dog is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Dog& Dog::operator=(const Dog& copy)
{
	this->type = copy.type;
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void Dog::makeSound() const 
{
	std::cout << this->type << " make a sound: Wooouuuuuuuuuuuf..." <<std::endl;
}
