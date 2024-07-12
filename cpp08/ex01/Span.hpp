/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:00:48 by scely             #+#    #+#             */
/*   Updated: 2024/07/12 12:04:39 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
		std::vector<unsigned int> _tab;
		Span();
			
	public:
		Span(unsigned int size);
		Span(Span const &copy);
		~Span();

		Span& operator=(Span const &copy);

		void addNumber(unsigned int size);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		template< typename R > void append_range( R& rg );
};


#endif