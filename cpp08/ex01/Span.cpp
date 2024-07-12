/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:33:47 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/12 14:21:19 by scely            ###   ########.fr       */
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
		throw std::logic_error("Exception: This number is already added");
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

void Span::print(void)
{
	if (this->_tab.empty())
	{
		std::cout << "Cannot print because this array is empty" << std::endl;
		return ;
	}
	for (std::vector<unsigned int>::iterator it = this->_tab.begin(); it != this->_tab.end(); ++it)
		std::cout << *it << std::endl;
	
}
