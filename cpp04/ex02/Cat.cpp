/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:39:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/14 15:33:51 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Cat::Cat()
{
	std::cout << GREEN << "Default constructor Cat is called" << RESET << std::endl;
	this->ideas = new Brain;
	this->type = "Cat";
}

Cat::Cat(std::string name)
{
	std::cout << GREEN << "Constructor Cat is called" << RESET << std::endl;
	this->ideas = new Brain("I'm a cat, king of human");
	this->type = name;
}

Cat::Cat(Cat &copy) : Animal()
{
	std::cout << GREEN << "Copy constructor Cat is called" << RESET << std::endl;
	this->type = copy.type;
	this->ideas = new Brain(*copy.ideas);
}

Cat::~Cat()
{
	std::cout << RED << "Destructor Cat is called" << RESET << std::endl;
	delete this->ideas;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Cat& Cat::operator=(const Cat& copy)
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

void Cat::makeSound() const
{
	std::cout << this->type << " make a sound: Miaouuuuuuuuuuuu..." << std::endl;
}

void Cat::makeIdeas()
{
	this->ideas->getIdeas();
}
