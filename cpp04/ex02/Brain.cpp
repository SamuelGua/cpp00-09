/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:26:16 by scely             #+#    #+#             */
/*   Updated: 2024/06/14 15:05:25 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Brain::Brain()
{
	std::cout << GREEN << "Default constructor Brain is called" << RESET << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "HELLO";
}

Brain::Brain(Brain& copy)
{
	std::cout << GREEN << "Copy constructor Brain is called" << RESET << std::endl;
	*this = copy;
}

Brain::Brain(std::string str)
{
	std::cout << GREEN << "Constructor Brain is called" << RESET << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = str;
}

Brain::~Brain()
{
	std::cout << RED << "Destructor Brain is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

Brain& Brain::operator=(const Brain& copy)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void Brain::getIdeas()
{
	for(int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
}