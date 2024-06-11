/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:32:47 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 10:13:46 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/**************************************************************************************/
/*                              Constructor et destructor                             */
/**************************************************************************************/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;

	if (this != &copy)
		*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = static_cast<int>(roundf(number * (1 << nb_bits)));
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = number << nb_bits;
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != & copy)
		this->number = copy.number;
	return (*this);
}


std::ostream& operator<<(std::ostream &output, const Fixed& obj)
{
    output << obj.toFloat();
    return (output);
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

float Fixed::toFloat(void) const
{
	return (static_cast<float> (this->number) / (1 << nb_bits));
}

int Fixed::toInt(void) const
{
	return (this->number >> nb_bits);
}
