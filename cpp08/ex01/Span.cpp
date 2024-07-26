/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:33:47 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/26 20:41:23 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

Span::Span(unsigned int size)
{
	if (std::numeric_limits<unsigned int>::max() <= size)
		throw std::logic_error("Exception: Too long number");
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
	else if (std::numeric_limits<unsigned int>::max() <= *occurrence)
		throw std::logic_error("Exception: Incorrect number");
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

void Span::append_range(std::vector<unsigned int> rg)
{
	if (rg.empty())
		throw std::logic_error("Execption: append_range fail because the second array is empty");
	
	std::vector<unsigned int>::iterator occurrence;
	for (std::vector<unsigned int>::iterator it_rg = rg.begin(); it_rg != rg.end(); it_rg++)
	{
		occurrence = std::find(this->_tab.begin(), this->_tab.end(), *it_rg);
		if (occurrence == this->_tab.end())
			continue ;
		else if (std::numeric_limits<unsigned int>::max() <= *it_rg)
		{
			std::cout << *it_rg <<" "<<std::numeric_limits<unsigned int>::max() << std::endl;
			throw std::logic_error("Exception: Incorrect number");
		}
		else 
			throw std::logic_error("Exception: This number is already added");
		
	}
		
	this->_tab.insert(this->_tab.end(), rg.begin(), rg.end());
}
