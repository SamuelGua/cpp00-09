/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:33:47 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/12 12:08:24 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Span::Span(unsigned int size)
{
	this->_tab.push_back(size);
}

Span::Span(Span const &copy)
{
	if (this != &copy)
		this->_tab = copy._tab;
	
}

Span::~Span()
{
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

Span& Span::operator=(Span const &copy)
{
	if (this != &copy)
		this->_tab = copy._tab;
	return (*this);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

void Span::addNumber(unsigned int size)
{
	std::vector<unsigned int>::iterator occurrence = std::find(this->_tab.begin(), this->_tab.end(), size);
	if (occurrence == this->_tab.end())
		this->_tab.push_back(size);
	else
		throw std::logic_error("Execption: This number is already added");
}

unsigned int Span::shortestSpan(void)
{
	if (this->_tab.size() < 1)
		throw std::logic_error("Execption: Not enough numbers to find the shortestSpan");
	std::sort(this->_tab.begin(), this->_tab.end());
	return (this->_tab.at(1) - this->_tab.at(0));
}

unsigned int Span::longestSpan(void)
{
	if (this->_tab.size() < 1)
		throw std::logic_error("Execption: Not enough numbers to find the longestSpan");
	std::sort(this->_tab.begin(), this->_tab.end());
	return (this->_tab.back() - this->_tab.front());
}

template< typename R > void Span::append_range( R& rg )
{
	if (!rg.size())
		throw std::logic_error("Execption: append_range fail because the second array is empty");

}