/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:00:48 by scely             #+#    #+#             */
/*   Updated: 2024/07/11 15:25:02 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
#define SPAN_HPP
#include <stddef.h>

class Span
{
	private:
		unsigned int *_tab;
		const unsigned int _size;
		Span();
		
		
	public:
		Span(unsigned int size);
		Span(Span const &copy);
		~Span();

		Span& operator=(Span const &copy);

		void addNumber(int n);
		unsigned int shortestSpan(unsigned int first, unsigned int second);
		unsigned int longestSpan(unsigned int first, unsigned int second);
};

Span::Span(unsigned int size) : _size(size)
{
	this->_tab = new unsigned int[size];
}
Span& Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
		const_cast<unsigned int&>(copy._size) = this->_size;
		this->_tab = new unsigned int[this->_size];
		for (int i = 0; i < this->_size; i++)
			this->_tab[i] = copy._tab[i];
	}
	return (*this);
}

Span::Span(Span const &copy) : _size(copy._size)
{
	if (this != &copy)
	{
		const_cast<unsigned int&>(copy._size) = this->_size;
		this->_tab = new unsigned int[this->_size];
		for (int i = 0; i < this->_size; i++)
			this->_tab[i] = copy._tab[i];
	}
}


Span::~Span()
{
	delete [] _tab;
}



#endif