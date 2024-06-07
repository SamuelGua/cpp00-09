/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:32:47 by scely             #+#    #+#             */
/*   Updated: 2024/06/07 05:59:00 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Fixed::Fixed()
{
	Fixed::number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = copy.getRawBits();
	return ;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

Fixed *Fixed::operator=(Fixed &add)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->number = add.getRawBits();
	return (&add);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void Fixed::setRawBits(const int raw)
{
	this->number = raw;
}