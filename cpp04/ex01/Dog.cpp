/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:39:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 13:33:47 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Dog::Dog()
{
	this->ideas = NULL;
	std::cout << GREEN << "Default constructor Dog is called" << RESET << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string name)
{
	this->ideas = new Brain("I'm a dog");	
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
	delete this->ideas;
}
