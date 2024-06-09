/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:32:47 by scely             #+#    #+#             */
/*   Updated: 2024/06/09 12:12:08 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/**************************************************************************************/
/*                              Constructor et destructor                             */
/**************************************************************************************/

Fixed::Fixed() : number(0)
{
}

Fixed::Fixed(const Fixed &copy)
{
	if (this != &copy)
		*this = copy;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const float number)
{
	this->number = static_cast<int>(round(number * (1 << nb_bits)));
}

Fixed::Fixed(const int number)
{
	this->number = number << nb_bits;
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/


// Compare >, <, >=, <=, == et !=

bool Fixed::operator<(const Fixed& other) const
{
	if(this->number < other.number)
		return (1);
	else
		return (0);
}

bool Fixed::operator>(const Fixed& other) const
{
	if(this->number > other.number)
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed& other) const
{
	if(this->number <= other.number)
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(const Fixed& other) const
{
	if(this->number >= other.number)
		return (1);
	else
		return (0);
}

bool Fixed::operator==(const Fixed& other) const
{
	if(this->number == other.number)
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed& other) const
{
	if(this->number != other.number)
		return (1);
	else
		return (0);
}


//Arithmetiques + - * /
Fixed& Fixed::operator=(const Fixed &copy)
{
	if (this != & copy)
		this->number = copy.number;
	return (*this);
}

Fixed Fixed::operator+( const Fixed &other) const 
{
	Fixed result(this->toFloat() + other.toFloat());
	return (result);
}

Fixed Fixed::operator-( const Fixed &other) const 
{
	Fixed result(this->toFloat() - other.toFloat());
	return (result);
}

Fixed Fixed::operator*( const Fixed &other) const 
{
	Fixed result(this->toFloat() * other.toFloat());
	return (result);
}

Fixed Fixed::operator/( const Fixed &other) const 
{
	Fixed result(this->toFloat() / other.toFloat());
	return (result);
}


// post et pre decrementation et incrementation ++ --
Fixed &Fixed::operator++()
{
	this->number += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed result = *this;
	++(*this);
	return (result);
}

Fixed &Fixed::operator--()
{
	this->number -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed result = *this;
	--(*this);
	return (result);
}

//Flux out in << 
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

float Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.number < b.number) ? a.toFloat(): b.toFloat();
}

float Fixed::min(Fixed &a, Fixed &b)
{
	return (a.number < b.number) ? a.toFloat() : b.toFloat();
}

float Fixed::max(Fixed &a, Fixed &b)
{
	return (a.number < b.number) ? b.toFloat() : a.toFloat();
}

float Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.number < b.number) ? b.toFloat() : a.toFloat();
}