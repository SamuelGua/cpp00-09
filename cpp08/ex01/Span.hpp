/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:00:48 by scely             #+#    #+#             */
/*   Updated: 2024/07/12 14:54:05 by scely            ###   ########.fr       */
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
		void print(void);
		template< typename R > void append_range( R& rg );
};

template< typename R > void Span::append_range( R& rg )
{
	if (rg.empty())
		throw std::logic_error("Execption: append_range fail because the second array is empty");
	for (typename R::const_iterator it = rg.begin(); it != rg.end(); ++it)
			this->addNumber(*it);
}

#endif