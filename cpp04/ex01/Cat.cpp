/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:39:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/12 11:11:00 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Cat::Cat()
{
	this->ideas = NULL;
	std::cout << GREEN << "Default constructor Cat is called" << RESET << std::endl;
	this->ideas = new Brain;
	this->type = "Cat";
}

Cat::Cat(std::string name)
{
	std::cout << GREEN << "Constructor Cat is called" << RESET << std::endl;
	this->ideas = new Brain("SALUT");
	this->type = name;
}

Cat::Cat(Cat &copy)
{
	std::cout << GREEN << "Copy constructor Cat is called" << RESET << std::endl;
	*this = copy;
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
	this->type = copy.type;
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
