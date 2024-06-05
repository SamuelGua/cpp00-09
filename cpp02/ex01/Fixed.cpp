/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:32:47 by scely             #+#    #+#             */
/*   Updated: 2024/06/05 14:58:23 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed *Fixed::operator=(Fixed &add)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->number = add.getRawBits();
	return (&add);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void Fixed::setRawBits(const int raw)
{
	this->number = raw;
}
