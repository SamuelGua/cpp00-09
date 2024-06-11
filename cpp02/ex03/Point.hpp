/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:39:48 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 09:21:02 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const Fixed &x, const Fixed &y);
		Point(const float x, const float y);
		Point(const Point& copy);
		~Point();
		float getXValue();
		float getYValue();
		Point& operator=(const Point& copy);
};

#endif

