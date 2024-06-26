/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:06:03 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 09:20:54 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


/**************************************************************************************/
/*                              Constructor et destructor                             */
/**************************************************************************************/

Point::Point() : x(0), y(0)
{
}

Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}	

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
}

Point::~Point() 
{
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

Point& Point::operator=(const Point& copy)
{
	if (this != &copy)
	{
		(Fixed)this->x = copy.x;
		(Fixed)this->y = copy.y;
	}
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

float Point::getXValue()
{
	return(this->x.toFloat());
}

float Point::getYValue()
{
	return(this->y.toFloat());
}