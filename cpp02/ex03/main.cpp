/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:33:23 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 09:45:15 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "main.h"

const int Fixed::nb_bits = 8;

int main( void )
{
	int i = 0;

	Point a(0,0);
	Point b(0,8);
	Point c(6,0);
	Point p(1.09,3.08);

	i = bsp(a, b, c, p);
	if (i)
		std::cout << "Le point est dans le triangle" << std::endl;
	else		
		std::cout << "Le point n'est pas dans le triangle" << std::endl;
}