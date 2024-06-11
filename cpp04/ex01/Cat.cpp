/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:39:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 13:39:14 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Cat::Cat()
{
	this->ideas = NULL;
	std::cout << GREEN << "Constructor Cat is called" << RESET << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string name)
{
	this->ideas = new Brain("Un chat");
	std::cout << GREEN << "Default constructor Cat is called" << RESET << std::endl;
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
	delete this->ideas;
}

void Cat::makeIdeas()
{
	this->ideas->getIdeas();
}
