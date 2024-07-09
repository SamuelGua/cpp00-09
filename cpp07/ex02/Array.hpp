/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:45:39 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/09 18:51:02 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template<class T>
class Array
{
	private:
		T *array;
		const size_t _size;

	public: // construtor & destructor
		Array();
		Array(const Array &copy);
		Array(size_t n);
		~Array();
	
	public: // operator
		Array& operator=(const Array &copy);
		T& operator[](int);
	
	public: // methodes
		size_t size() const;

	class OutOfBounds : public std::exception
	{
		const char * what() const throw()
		{
			return ("Execption: out of bounds");
		}
	};
};

#include "Array.tpp"

#endif