/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:45:39 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/04 19:04:43 by marie-evece      ###   ########.fr       */
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
		T operator[](int);
	
	public: // methodes
		size_t size() const;

	class OutOfBounds : std::exception
	{
		const char * what() const throw ()
		{
			return ("Execption: out of bounds")
		}
	};
};

#include "Array.tpp"

#endif