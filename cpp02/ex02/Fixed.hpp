/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:33:40 by scely             #+#    #+#             */
/*   Updated: 2024/06/05 15:02:34 by scely            ###   ########.fr       */
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
		Fixed(Fixed &copy);
		~Fixed();
		Fixed *operator=(Fixed &add);
		int getRawBits ( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const ;
		int toInt(void) const ;

};



#endif