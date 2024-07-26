/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:00:48 by scely             #+#    #+#             */
/*   Updated: 2024/07/26 20:27:59 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>

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
		void append_range(std::vector<unsigned int> rg);
};

#endif