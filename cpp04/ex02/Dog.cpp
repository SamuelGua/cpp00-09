/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:39:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/14 15:36:09 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Dog::Dog()
{
	std::cout << GREEN << "Default constructor Dog is called" << RESET << std::endl;
	this->ideas = new Brain;
	this->type = "Dog";
}

Dog::Dog(std::string name)
{
	std::cout << GREEN << "Constructor Dog is called" << RESET << std::endl;
	this->ideas = new Brain("I'm a dog");	
	this->type = name;
}

Dog::Dog(Dog &copy) : Animal()
{
	std::cout << GREEN << "Copy constructor Dog is called" << RESET << std::endl;
	this->type = copy.type;
	this->ideas = new Brain(*copy.ideas);

}

Dog::~Dog()
{
	std::cout << RED << "Destructor Dog is called" << RESET << std::endl;
	delete this->ideas;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Dog& Dog::operator=(const Dog& copy)
{
	if (this == &copy)
        return (*this);
	this->type = copy.type;
	if (this->ideas)
		delete this->ideas;
	this->ideas = new Brain(*copy.ideas);
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void Dog::makeSound() const 
{
	std::cout << this->type << " make a sound: Wooouuuuuuuuuuuf..." <<std::endl;
}

void Dog::makeIdeas()
{
	this->ideas->getIdeas();
}
