/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:39:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:21:50 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Cat::Cat()
{
	std::cout << GREEN << "Constructor Cat is called" << RESET << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string name)
{
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
}
