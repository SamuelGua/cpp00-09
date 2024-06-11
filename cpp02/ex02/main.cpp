/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:33:23 by scely             #+#    #+#             */
/*   Updated: 2024/06/10 10:01:13 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb_bits = 8;

int main( void )
{
	{
		std::cout << "============= Main subject =============" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << "============= My Main =============" << std::endl;
		std::cout << "  ==== Arithmetics operator ====" << std::endl;
		Fixed one(10);
		Fixed two(5.53f);
		std::cout << "[Class one: " << one.toFloat() << "  |  ";
		std::cout << "Class two: " << two.toFloat() << "]" << std::endl;
		Fixed const a( one + two);
		std::cout << "Addition: " << a << std::endl;
		Fixed const b( one - two);
		std::cout << "Subtraction: " << b << std::endl;
		Fixed const c( one * two);
		std::cout << "Multiplication: " << c << std::endl;
		Fixed const d( one / two);
		std::cout << "Division: " << d << std::endl;
	}
	{
		std::cout << "  ==== logical operator ====" << std::endl;
		Fixed one(5.53f);
		Fixed two(5.53f);
		std::cout << "Less: " << (one < two) << std::endl;
		std::cout << "Equal: " << (one == two) << std::endl;
		std::cout << "Great: " << (one > two) << std::endl;
		std::cout << "Different from: " << (one != two) << std::endl;

	}
	{
		std::cout << "  ==== check ====" << std::endl;
		Fixed one(10.0f);
		Fixed two(5.53f);
		std::cout << "[Class one: " << one.toFloat() << "  |  ";
		std::cout << "Class two: " << two.toFloat() << "]" << std::endl;
		std::cout << "Max: " << Fixed::max(one, two) << std::endl;
		std::cout << "Min: "<< Fixed::min(one, two) << std::endl;
		
	}
}