/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:39:27 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:21:50 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

WrongCat::WrongCat()
{
	std::cout << GREEN << "Constructor WrongCat is called" << RESET << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string name)
{
	std::cout << GREEN << "Default constructor WrongCat is called" << RESET << std::endl;
	this->type = name;
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal()
{
	std::cout << GREEN << "Copy constructor WrongCat is called" << RESET << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << RED << "Destructor WrongCat is called" << RESET << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operator                                  */
/**************************************************************************************/

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	this->type = copy.type;
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void WrongCat::makeSound() const
{
	std::cout << this->type << " make a sound: Miaouuuuuuuuuuuu..." << std::endl;
}
