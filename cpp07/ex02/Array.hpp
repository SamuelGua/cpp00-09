/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:45:39 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/04 15:13:42 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <class T>
class Array
{
	private:
		T *array;
	public:
		Array();
		Array(const Array &copy);
		Array(unsigned int n);
		~Array();

		Array& operator=(const Array &copy);
		int& operator[](int);
};
template <class T>
Array<T>::Array()
{
}

template <class T>
Array<T>::~Array()
{
}


#endif