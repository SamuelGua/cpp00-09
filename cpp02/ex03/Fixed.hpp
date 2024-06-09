/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:33:40 by scely             #+#    #+#             */
/*   Updated: 2024/06/09 13:27:31 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#	define FIXED_HPP

#include <cctype>
#include <iostream>

class Fixed
{
	private:
		int					number;
		static const int	nb_bits;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const float number);
		Fixed(const int number);
		~Fixed();
		
		Fixed &operator=(const Fixed &copy);
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		static float min(const Fixed &a, const Fixed &b);
		static float min(Fixed &a, Fixed &b);
		static float max(const Fixed &a, const Fixed &b);
		static float max(Fixed &a, Fixed &b);
		
		
		int getRawBits ( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const ;
		int toInt(void) const ;
};

std::ostream& operator<<(std::ostream &output, const Fixed& obj);

#endif