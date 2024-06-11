/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:29:01 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 09:38:43 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float side(Point va, Point vb, Point  point)
{
	float result = 0;
	
	result = ((vb.getXValue() - point.getXValue()) * (va.getYValue() - point.getYValue()));
	result -= ((vb.getYValue() - point.getYValue()) * (va.getXValue() - point.getXValue()));
	return (result); 

}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	int check_0 = 0;
	int check_1 = 0;
	int check_2 = 0;
	check_0 = side(a, b, point);
	check_1 = side(b, c, point);
	check_2 = side(c, a, point);

	if (check_0 > 0 && check_1 > 0 && check_2 > 0)
		return (true);
	else if (check_0 < 0 && check_1 < 0 && check_2 < 0)
		return (true);
	return (false);
}
